#include <stdio.h>
#include <locale.h>
#define d 2.54
#define p 2.32166

void main(void)

{
	setlocale(LC_ALL, "RUS");
	int num1,num2;
	puts("������� �����");
	scanf("%d %d", &num1,&num2);
	printf("������� 2 ����� %d,%d", num1,num2);
	printf("\n������:%d \n��������:%d \n������������:%d \n�������:%d", num2 + num1, num2 - num1, num2 * num1,  num2 % num1);
	
	int dym,pul;
	float result,result2;
	puts("\n������� �������� ��� ��������� ������");
	scanf("%d",&dym);
	puts("\n������� �������� ��� ��������� �����������");
	scanf("%d", &pul);
	result = d * dym;
	result2 = p * pul;
	printf("%d ������ - ��� %.2f ��. \n%d pulgadas - ��� %.2f ��", dym,result,pul,result2);
	
	float a, b;
	puts("\n������� �������� �");
	scanf("%g", &a);
	puts("\n������� �������� b");
	scanf("%g", &b);
	puts  ("\n__________________");
	printf("\n|a*b | a+b | a-b |");
	puts  ("\n__________________");
	printf("\n|%g*%g | %g+%g | %g-%g |", a,b,a,b,a,b);
	puts  ("\n__________________");
	printf("\n|  %g |  %g |  %g |", a*b, a+b, a-b);

	
	int k = 2;
	float m = 6.8;
	printf("%lf%d", (double)k, (int)m);
	



}
