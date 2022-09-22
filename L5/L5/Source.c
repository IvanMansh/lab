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
	double y = exp(2 * x) + pow(9.7, ForB(x));//���������
	return y;
}

void main()
{
	setlocale(LC_ALL, "RUS");
	double end;
	int x;
	puts("������� �������� ����");
	scanf("%d", &x);
	end = ForSin(x);
	printf("\n����� �������� ������ %.6f", end);
	puts("\n");

	double res1,res2,res3,X;
	puts("\n������� �������� �");
	scanf("%lf", &X);
	puts("\n��������� ����������:");
	res1 = ForA(X);
	res2 = ForB(X);
	res3 = ForY(X);
	printf("\n� = %lf \nb = %lf \ny = %lf", res1, res2, res3);


}