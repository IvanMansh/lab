#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL, "RUS");
    char  sym,c;
    float x, y;
    printf("������� ����� ��� �����: ");
    scanf("%c", &sym);
    switch ((sym >= 'a' && sym <= 'z') || (sym >= 'A' && sym <= 'Z'))
    {
    case 1:
        printf("\n������� �����.");
        break;
    default:
        printf("\n������� �����.");
        break;
    }

    puts("\n������� �����, ��������, �����");
    scanf("%f %c %f", &x, &c, &y);
    switch (c)
    {

    case '+':
        printf("=%g", x + y);
        break;

    case '-':
        printf("=%g", x - y);
        break;

    case '*':
        printf("=%g", x * y);
        break;
    case '/':
        printf("=%g", x / y);
        break;
    case '^':
        printf("=%g", pow(x,y));
        break;
    }
}
    