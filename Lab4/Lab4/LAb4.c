#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "RUS");
    char c;
    int i;
    float f;

    double d;
    puts("\nвведите символ");
    scanf("\n%c", &c);
    printf("\n%c", c);

    puts("\nвведите цел число");
    scanf("\n%d", &i);
    printf("\n%d", i);

    puts("\nвведите дробное число");
    scanf("\n%g", &f);
    printf("\n%g", f);

    puts("\nвведите дробное число с большим значением после зап€той");
    scanf("\n%g", &d);
    printf("\n%g", d);
    puts("\n");

    printf("\nцела€ часть вещественного числа = %d", (int)f);
    printf("\nдробна€ часть вещественного числа = %g", f - (int)f);
    printf("\nкод введеног символа = %d", (int)c);
    printf("\nдес€тичное число соответствующее 1/i = %f", (float)1 / i);
    int a = 11, b = 3, x;
    float y;
    double z;
    x = a / b;
    y = a / b;
    z = a / b;
    printf("\nx = %g,y = %g,z = %g", x, y, z);
    printf("\n%d/%d = %g, %d/%d = %g",a, b, (float)a/b, a, b, (double)a/b);
    puts("\n");

    int n;
    puts("введите целое трехзначное число");
    scanf("%d", &n);
    printf("\nпоследн€€ цифра n = %d, перва€ цифра числа n = %d, сумма всех цифр числа n = %d", n % 10, n / 100, ((n / 10) % 10)+(n % 10)+(n / 100));
    puts("\n");


}