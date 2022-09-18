#include<stdio.h>
#include<locale.h>
#define days 365
#define mounths 12
void main()
{
	setlocale(LC_ALL, "RUS");
	int years, resultDays, resultMounths;
	puts("введите прожитые года");
	scanf("\n%d", &years);
	resultDays = years * days;
	resultMounths = years * mounths;
	printf("\n%d лет - это %d мес€цев. \n%d лет - это %d дней", years, resultMounths, years, resultDays);

}