#include <stdio.h>
#include <locale.h>
#define colEggs  253
#define mChicken 1.9
#define mEggs 58


void main()
{
	float x, y, z;
	setlocale(LC_ALL, "RUS");

	//24

	printf("разница веса курицы и €иц за год равна: %g кг",((mEggs * colEggs) / 1000) - mChicken);
	puts("\n");

	//27

	puts("\nвведите стоимость 1 кг конфет");
	scanf("%g",&x);

	puts("\nвведите стоимость 1 кг печень€");
	scanf("%g", &y);

	puts("\nвведите стоимость 1 кг €блок");
	scanf("%g", &z);
	puts("\nитого\n___________________");
	printf("\n1 кг конфет = %g. \n1 кг печень€ = %g. \n1 кг €блок = %g",x, y, z);



}