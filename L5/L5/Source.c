#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846
#define c 0.4
double ForSin(int x)
{
	double res = sin(x*M_PI/180);
	return res;
}

double ForA(double x)
{
	double a = log10(x);
	return a;
}

double ForB(double x)
{
	double b = pow(ForA(x), 2) + sqrt(c * x);
	return b;
}

double ForY(double x)
{
	double y = exp(2 * x) + pow(9.7f, ForB(x));
	return y;
}

void main()
{
	setlocale(LC_ALL, "RUS");
	double end;
	int x;
	puts("введите значение угла");
	scanf("%d", &x);
	end = ForSin(x);
	printf("\nвывод значений синуса %.6f", end);
	puts("\n");

	double res1,res2,res3,X;
	puts("\nвведите значение х");
	scanf("%lf", &X);
	puts("\nрезультат вычислений:");
	res1 = ForA(X);
	res2 = ForB(X);
	res3 = ForY(X);
	printf("\nа = %lf \nb = %lf \ny = %.2lf", res1, res2, res3);
	puts("\n");

	int A = res1;
	int B = res2;
	int C = res3;

	if (((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0)))
	{
		puts("\nтолько одно из чисел А и В четное: 1");
		 
	}
	else
	{
		puts("\nтолько одно из чисел А и В четное: 0");
	}
	if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0))
	{
		puts("\nкаждое из чисел А,В,С кратно трем: 1");
	}
	else
	{
		puts("\nкаждое из чисел А,В,С кратно трем: 0");
	}

	printf("\n%d %d %d", (int)A, (int)B, (int)C);



}