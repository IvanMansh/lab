#include<stdio.h>
#include<locale.h>
#define days 365
#define mounths 12
void main()
{
	setlocale(LC_ALL, "RUS");
	int years, resultDays, resultMounths;
	puts("������� �������� ����");
	scanf("\n%d", &years);
	resultDays = years * days;
	resultMounths = years * mounths;
	printf("\n%d ��� - ��� %d �������. \n%d ��� - ��� %d ����", years, resultMounths, years, resultDays);

}