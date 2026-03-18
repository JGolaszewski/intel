#! /usr/bin/octave

% Wymuszamy użycie gnuplot, aby uniknąć błędów z OpenGL w Twoim środowisku
graphics_toolkit("gnuplot");

clear

N = 128;
n = [0:N-1]';
x = 2*(n/N);
h = 2.0 / N; % Szerokość pojedynczego podprzedziału

% Inicjalizacja tablic
a = zeros(N, 1);
b = zeros(N, 1);
c = zeros(N, 1);

# Nasza funkcja docelowa:
f = @(x) sin((2*x)-(pi/4));

# Węzły Czebyszewa dla wielomianu 2. stopnia (na przedziale od -1 do 1)
t0 = sqrt(3)/2;
t1 = 0;
t2 = -sqrt(3)/2;

for k = 0 : N-1
    i = k+1; # array indexing starts at 1
    xk = x(i); % Początek obecnego podprzedziału
    
    # Transformacja węzłów Czebyszewa na obecny podprzedział [xk, xk + h]
    xc0 = xk + (h/2) * (t0 + 1);
    xc1 = xk + (h/2) * (t1 + 1);
    xc2 = xk + (h/2) * (t2 + 1);
    
    # Wartości w węzłach
    y0 = f(xc0);
    y1 = f(xc1);
    y2 = f(xc2);
    
    # Lokalne zmienne 'u' (odległość od początku podprzedziału, czyli sprzętowe x_l)
    u0 = xc0 - xk;
    u1 = xc1 - xk;
    u2 = xc2 - xk;
    
    # Dopasowanie wielomianu kwadratowego: c*u^2 + b*u + a
    p = polyfit([u0, u1, u2], [y0, y1, y2], 2);
    
    c(i) = p(1); # współczynnik przy x^2
    b(i) = p(2); # współczynnik przy x^1
    a(i) = p(3); # wyraz wolny (offset)
endfor

en_plot = 1; # set to 1 to enable plotting

# Plot the coefficients:
if (en_plot)
    close
    % Tworzymy figurę w tle, żeby uniknąć błędów z wyświetlaniem
    fig = figure("visible", "off"); 
    
    plot (x, a, 'b-*', x, b, 'r-*', x, c, 'g-*')
    xlabel("x")
    ylabel("coeff")
    title("Approximation coefficients (Chebyshev) for f(x) = sin((2*x)-(pi/4))")
    legend('a (offset)', 'b (linear)', 'c (quadratic)', 'location', 'northeast')
    axis ([0, 2, -2.2, 2.2])
    grid on
    
    # --- ZAPIS WYKRESU DO PLIKU ---
    print(fig, "plot_chebyshev_coeffs.png", "-dpng");
    printf("Zrobione! Wykres zapisano do pliku: plot_chebyshev_coeffs.png\n");
endif

coeffs = [n a b c];
format long

# --- OTWARCIE PLIKU DO ZAPISU WSPÓŁCZYNNIKÓW ---
filename = "lut_coeffs_chebyshev.txt";
fid = fopen(filename, "w");

if (fid == -1)
    error("Nie mozna utworzyc pliku do zapisu!");
endif

# Zapis nagłówka do pliku (z zachowaniem idealnych odstępów)
fprintf(fid, "%3s  %32s  %32s  %32s\n", "# k", "a", "b", "c");

# Zapis wartości do pliku (32 znaki szerokości, 28 po przecinku)
for k = 0 : N-1
    i = k+1; # array indexing starts at 1
    fprintf(fid, "%3d  %32.28f  %32.28f  %32.28f\n", k, a(i), b(i), c(i));
endfor

# Zamknięcie pliku
fclose(fid);

printf("Zrobione! Wspolczynniki zapisano do pliku: %s\n", filename);