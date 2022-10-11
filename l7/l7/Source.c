#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL, "RUS");
    char  sym,c;
    float x, y;
    printf("¬ведите букву или цифру: ");
    scanf("%c", &sym);
    switch ((sym >= 'a' && sym <= 'z') || (sym >= 'A' && sym <= 'Z'))
    {
    case 1:
        printf("\n¬ведена буква.");
        break;
    default:
        printf("\n¬ведена цифра.");
        break;
    }

    puts("\nвведите число, операцию, число");
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
    