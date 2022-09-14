#include <stdio.h>
#include <locale.h>
#define d 2.54
#define p 2.32166

void main(void)

{
	setlocale(LC_ALL, "RUS");
	int num1,num2;
	puts("введите числа");
	scanf("%d %d", &num1,&num2);
	printf("Введено 2 числа %d,%d", num1,num2);
	printf("\nсуммма:%d \nразность:%d \nпроизведение:%d \nостаток:%d", num2 + num1, num2 - num1, num2 * num1,  num2 % num1);
	
	int dym,pul;
	float result,result2;
	puts("\nвведите значения для расчсетов дюймов");
	scanf("%d",&dym);
	puts("\nвведите значения для расчсетов пульгаласов");
	scanf("%d", &pul);
	result = d * dym;
	result2 = p * pul;
	printf("%d дюймов - это %.2f см. \n%d pulgadas - это %.2f см", dym,result,pul,result2);
	
	float a, b;
	puts("\nвведите значение а");
	scanf("%g", &a);
	puts("\nвведите значение b");
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
