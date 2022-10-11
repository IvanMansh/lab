#include <locale.h>
#include <stdio.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL, "RUS");
    int years;
    puts("введите год");
    scanf("%d", &years);

    if (((years % 4 == 0) || (years % 400 == 0)) && (years % 100 != 0))
    {
        printf("\nвисокосный год - %d", years);
    }
    else
    {
        printf("\nгод не високосный - %d", years);
    }

    float x;
    puts("\nвведите х");
    scanf("%g", &x);
    (x <= 3, 6) ? printf("%g", ((5 * x) / (10 * pow(x, 2) + 1))) : printf("%g", (45 * pow(x, 2) + 5));

    //HW

    int num, delnum;

    puts("\nвведите целое число");
    scanf("%d", &num);

    puts("\nвведите делитель");
    scanf("%d", &delnum);
    if (num % delnum == 0)
    {
        puts("число делится - да");
    }
    else
    {
        puts("число делится - нет");
    }
}