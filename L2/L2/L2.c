#include <stdio.h>
#include <locale.h>

void main(void)

{
	setlocale(LC_ALL, "RUS");
	printf("%20s \n ", "��� �����");
	printf("%-20s \n ", "��� �����");
	printf("\t", "��� �����");
	printf("%10.5f \n",12.234657);
	printf("������� �� ������� %d �� %d ����� %d. \n��������� %d �� %d ����� %d \n ", 7, 2, 5 % 2, 2000, 4, 2000 * 4);
	printf("%g ��������� %e ����� %f\n ", 5., 2., 5. / 2);
	printf("\n");

	int n, k, t;
	n = 1;
	k = 3;
	t = 10;
	printf("������ %d ����� %d ����� 00 ������\n",n, k);
	printf("���� %d ������ �����\n",k);
	printf("�� �������� �������� %d ����� � %d �����\n",n,k);
	printf("� 8.00 ������ %d ������\n",t);
	printf("������� ���  = %d/24 �����  � ������� ������ = %d/60 ����\n",n,k);
	printf("\n");
	
	float N = 2;
	int m=4,K=2;
	printf("������ \n %8d , %d  \n��������� %+-.*f", N, 333, m, N / 333 );
	
	

}