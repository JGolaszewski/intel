#! /usr/bin/octave

graphics_toolkit("gnuplot");

clear

N = 128;
n = [0:N-1]';
x = 2*(n/N);
h = 2.0 / N;

a = zeros(N, 1);
b = zeros(N, 1);
c = zeros(N, 1);

f = @(x) sin((2*x)-(pi/4));

t0 = sqrt(3)/2;
t1 = 0;
t2 = -sqrt(3)/2;

for k = 0 : N-1
    i = k+1;
    xk = x(i);
    
    xc0 = xk + (h/2) * (t0 + 1);
    xc1 = xk + (h/2) * (t1 + 1);
    xc2 = xk + (h/2) * (t2 + 1);
    
    y0 = f(xc0);
    y1 = f(xc1);
    y2 = f(xc2);
    
    u0 = xc0 - xk;
    u1 = xc1 - xk;
    u2 = xc2 - xk;
    
    p = polyfit([u0, u1, u2], [y0, y1, y2], 2);
    
    c(i) = p(1);
    b(i) = p(2);
    a(i) = p(3);
endfor

en_plot = 1;

if (en_plot)
    close
    fig = figure("visible", "off"); 
    
    plot (x, a, 'b-*', x, b, 'r-*', x, c, 'g-*')
    xlabel("x")
    ylabel("coeff")
    title("Approximation coefficients (Chebyshev) for f(x) = sin((2*x)-(pi/4))")
    legend('a (offset)', 'b (linear)', 'c (quadratic)', 'location', 'northeast')
    axis ([0, 2, -2.2, 2.2])
    grid on
    
    print(fig, "plot_chebyshev_coeffs.png", "-dpng");
    printf("Zrobione! Wykres zapisano do pliku: plot_chebyshev_coeffs.png\n");
endif

coeffs = [n a b c];
format long

filename = "lut_coeffs_chebyshev.txt";
fid = fopen(filename, "w");

if (fid == -1)
    error("Nie mozna utworzyc pliku do zapisu!");
endif

fprintf(fid, "%3s  %32s  %32s  %32s\n", "# k", "a", "b", "c");

for k = 0 : N-1
    i = k+1;
    fprintf(fid, "%3d  %32.28f  %32.28f  %32.28f\n", k, a(i), b(i), c(i));
endfor

fclose(fid);

printf("Zrobione! Wspolczynniki zapisano do pliku: %s\n", filename);