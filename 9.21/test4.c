#include<stdio.h>
int main()
{
	int a;
	printf("������һ������\n");
	scanf_s("%d", &a);
	if(scanf_s("%d", &a) == 1)
		printf("��������������\n");
	else
		printf("�������ݲ�������\n");
	return 0;
}
/*�̿������⣬���ǲ���ִ�д������ʱ�������*/