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

	printf("������� ���� ������ � ��� �� ��� �����: %g ��",((mEggs * colEggs) / 1000) - mChicken);
	puts("\n");

	//27

	puts("\n������� ��������� 1 �� ������");
	scanf("%g",&x);

	puts("\n������� ��������� 1 �� �������");
	scanf("%g", &y);

	puts("\n������� ��������� 1 �� �����");
	scanf("%g", &z);
	puts("\n�����\n___________________");
	printf("\n1 �� ������ = %g. \n1 �� ������� = %g. \n1 �� ����� = %g",x, y, z);



}