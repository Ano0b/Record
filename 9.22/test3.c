#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	printf("������һ������\n");
	if (scanf_s("%d %f %c", &a,&b,&c) == 3)
		printf("��������������\n");
	else
		printf("�������ݲ�������\n");
	return 0;
}
/*��ȫ�ճ�����ȴ������������*/