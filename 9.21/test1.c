/*scanf��printf������ѧϰ*/
#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	printf("������һ������\n");
	scanf_s("%lf", &a);
	if (floor(a + 0.5) == a)
		printf("��������������\n");
	else
		printf("�������ݲ�������\n");
			return 0;
}