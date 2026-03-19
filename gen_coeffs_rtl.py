import sys
import math

INPUT_FILE = "octave-model/lut_coeffs_chebyshev.txt"
OUTPUT_FILE = "rtl-model/lut.vs"

# Parametry wielomianu (zgodne z quadra.vh)
A_W, A_F, B_W, B_F, C_W, C_F = 22, 20, 17, 14, 17, 14

def ac_rnd_zero(val):
    """
    Emuluje tryb AC_RND_ZERO z biblioteki Algorithmic C:
    - Zaokrągla do najbliższej liczby całkowitej.
    - W przypadku remisu (dokładnie 0.5) zaokrągla w stronę zera.
    """
    abs_val = abs(val)
    integer_part = math.floor(abs_val)
    fractional_part = abs_val - integer_part
    
    if fractional_part > 0.5:
        rounded_abs = integer_part + 1
    elif fractional_part < 0.5:
        rounded_abs = integer_part
    else: # Remis (równo 0.5)
        rounded_abs = integer_part # W stronę zera, czyli zostawiamy mniejszą wartość bezwzględną
        
    # Przywracamy oryginalny znak
    return int(math.copysign(rounded_abs, val))

def to_hex(val, frac_bits, total_bits):
    # 1. Przeskalowanie wartości zmiennoprzecinkowej o ilość bitów ułamkowych
    scaled_float = val * (1 << frac_bits)
    
    # 2. Poprawne zaokrąglenie (zamiast brutalnego int())
    scaled = ac_rnd_zero(scaled_float)
    
    # 3. Zabezpieczenie przed przekroczeniem zakresu (clamping)
    min_val, max_val = -(1 << (total_bits - 1)), (1 << (total_bits - 1)) - 1
    scaled = max(min_val, min(scaled, max_val))
    
    # 4. Konwersja liczb ujemnych na kod uzupełnień do dwóch (U2)
    if scaled < 0:
        scaled += (1 << total_bits)
        
    # 5. Formatowanie do standardu SystemVerilog (np. 22'h3F5501)
    hex_digits = (total_bits + 3) // 4
    return f"{total_bits}'h{scaled:0{hex_digits}X}"

def main():
    try:
        with open(INPUT_FILE, 'r') as f:
            entries = [tuple(map(float, line.split()[:4])) 
                       for line in f if line.strip() and not line.startswith('#')]
    except FileNotFoundError:
        sys.exit(f"Error: File '{INPUT_FILE}' not found.")

    if not entries:
        sys.exit("Error: The file is empty or contains no valid data.")

    # Wyliczanie szerokości wejścia adresu na podstawie największego indeksu
    x1_w = max(1, int(max(e[0] for e in entries)).bit_length())

    with open(OUTPUT_FILE, 'w') as f:
        f.write('`include "quadra.vh"\n\nmodule lut (\n    input  x1_t x1,\n    output a_t  a,\n    output b_t  b,\n    output c_t  c\n);\n\n')
        f.write('always_comb unique casez (x1)\n')
        
        for k, a, b, c in entries:
            # Wpisywanie odpowiednio sformatowanych i zaokrąglonych hexów
            f.write(f"    {x1_w}'d{int(k):<7} : begin a = {to_hex(a, A_F, A_W)}; b = {to_hex(b, B_F, B_W)}; c = {to_hex(c, C_F, C_W)}; end\n")
            
        f.write("    default : begin a = '0; b = '0; c = '0; end\nendcase\n\nendmodule\n")

    print(f"Success! The LUT has been generated and saved to '{OUTPUT_FILE}'.")

if __name__ == "__main__":
    main()