#include <locale.h>
#include <stdio.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL, "RUS");
    int years;
    puts("������� ���");
    scanf("%d", &years);

    if (((years % 4 == 0) || (years % 400 == 0)) && (years % 100 != 0))
    {
        printf("\n���������� ��� - %d", years);
    }
    else
    {
        printf("\n��� �� ���������� - %d", years);
    }

    float x;
    puts("\n������� �");
    scanf("%g", &x);
    (x <= 3, 6) ? printf("%g", ((5 * x) / (10 * pow(x, 2) + 1))) : printf("%g", (45 * pow(x, 2) + 5));

    //HW

    int num, delnum;

    puts("\n������� ����� �����");
    scanf("%d", &num);

    puts("\n������� ��������");
    scanf("%d", &delnum);
    if (num % delnum == 0)
    {
        puts("����� ������� - ��");
    }
    else
    {
        puts("����� ������� - ���");
    }
}