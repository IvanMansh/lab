#include <stdio.h>
#include <locale.h>


void main()
{
	float x, y, z,mk,mp,ma, result;
	setlocale(LC_ALL, "RUS");

	puts("\nвведите стоимость 1 кг конфет");
	scanf("%g",&x);
	puts("\nвведите вес конфет в кг");
	scanf("%g", &mk);

	puts("\nвведите стоимость 1 кг печень€");
	scanf("%g", &y);
	puts("\nвведите  вес печень€ в кг");
	scanf("%g", &mp);

	puts("\nвведите стоимость 1 кг €блок");
	scanf("%g", &z);
	puts("\nвведите вес €блок в кг");
	scanf("%g", &ma);

	result = ((x * mk) + (y * mp) + (z * ma));

	puts("\nитого\n___________________");
	printf("\n%g кг конфет = %g руб. \n%g кг печень€ = %g руб. \n%g кг €блок = %g руб. \nвсего = %g руб.",mk, x * mk, mp, y * mp, ma, z * ma, result);

}