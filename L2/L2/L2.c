#include <stdio.h>
#include <locale.h>

void main(void)

{
	setlocale(LC_ALL, "RUS");
	printf("%20s \n ", "Это текст");
	printf("%-20s \n ", "Это текст");
	printf("\t", "Это текст");
	printf("%10.5f \n",12.234657);
	printf("Остаток от деления %d на %d равен %d. \nУмножение %d на %d равно %d \n ", 7, 2, 5 % 2, 2000, 4, 2000 * 4);
	printf("%g разделить %e равно %f\n ", 5., 2., 5. / 2);
	printf("\n");

	int n, k, t;
	n = 1;
	k = 3;
	t = 10;
	printf("Сейчас %d часов %d минут 00 секунд\n",n, k);
	printf("Идет %d минута суток\n",k);
	printf("До полуночи осталось %d часов и %d минут\n",n,k);
	printf("С 8.00 прошло %d секунд\n",t);
	printf("Текущий час  = %d/24 суток  и текущая минута = %d/60 часа\n",n,k);
	printf("\n");
	
	float N = 2;
	int m=4,K=2;
	printf("Данные \n %8d , %d  \nРезультат %+-.*f", N, 333, m, N / 333 );
	
	

}