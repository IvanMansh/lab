#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "RUS");
    char c;
    int i;
    float f;

    double d;
    puts("\n������� ������");
    scanf("\n%c", &c);
    printf("\n%c", c);

    puts("\n������� ��� �����");
    scanf("\n%d", &i);
    printf("\n%d", i);

    puts("\n������� ������� �����");
    scanf("\n%g", &f);
    printf("\n%g", f);

    puts("\n������� ������� ����� � ������� ��������� ����� �������");
    scanf("\n%g", &d);
    printf("\n%g", d);
    puts("\n");

    printf("\n����� ����� ������������� ����� = %d", (int)f);
    printf("\n������� ����� ������������� ����� = %g", f - (int)f);
    printf("\n��� �������� ������� = %d", (int)c);
    printf("\n���������� ����� ��������������� 1/i = %f", (float)1 / i);
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
    puts("������� ����� ����������� �����");
    scanf("%d", &n);
    printf("\n��������� ����� n = %d, ������ ����� ����� n = %d, ����� ���� ���� ����� n = %d", n % 10, n / 100, ((n / 10) % 10)+(n % 10)+(n / 100));
    puts("\n");


}