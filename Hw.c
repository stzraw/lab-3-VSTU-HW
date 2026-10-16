#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define R 6371000.0
#define GM 3.986004418e14

double calc_gravity(double h, double m);

int main()
{
    double h, m;
    double pw;

    setlocale(LC_CTYPE, "RUS");

    puts("Введите высоту падения (м):");
    scanf("%lf", &h);

    puts("Введите массу тела (кг):");
    scanf("%lf", &m);
    pw = calc_gravity(h, m);

    printf("Сила тяжести равна: %.2f Н\n", pw);
    return 0;
}

double calc_gravity(double h, double m)
{
    double g;
    double force;

    g = GM / ((R + h) * (R + h));
    force = m * g;
    return force;
}
