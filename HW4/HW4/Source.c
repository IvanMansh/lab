#include <stdio.h>
#include <locale.h>


void main()
{
	float x, y, z,mk,mp,ma, result;
	setlocale(LC_ALL, "RUS");

	puts("\n������� ��������� 1 �� ������");
	scanf("%g",&x);
	puts("\n������� ��� ������ � ��");
	scanf("%g", &mk);

	puts("\n������� ��������� 1 �� �������");
	scanf("%g", &y);
	puts("\n�������  ��� ������� � ��");
	scanf("%g", &mp);

	puts("\n������� ��������� 1 �� �����");
	scanf("%g", &z);
	puts("\n������� ��� ����� � ��");
	scanf("%g", &ma);

	result = ((x * mk) + (y * mp) + (z * ma));

	puts("\n�����\n___________________");
	printf("\n%g �� ������ = %g ���. \n%g �� ������� = %g ���. \n%g �� ����� = %g ���. \n����� = %g ���.",mk, x * mk, mp, y * mp, ma, z * ma, result);

}