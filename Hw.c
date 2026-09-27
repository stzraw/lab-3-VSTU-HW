#include <locale.h>
#include <stdio.h>
#include <stdlib.h> 
#define      R       6371000.0f
#define      GM      3.986004418e14f

int main()
{
	system("chcp 65001");
    //setlocale(LC_CTYPE, "RUS");

    float h, m, g, pw;
	puts("Введите высоту падения (м):");
	scanf_s("%f", &h);

    puts("Введите массу тела (кг):");
	scanf_s("%f", &m);

    g = GM / ((R + h) * (R + h));
    pw = m * g;
    
	printf("Сила тяжести равна: %.2f Н\n", pw);
	return 0;
}