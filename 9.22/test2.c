#include<stdio.h>
int main()
{
	float a;
	int b;
	printf("������һ������\n");
	if (scanf_s("%f %d", &a,&b) == 2)
		printf("��������������\n");
	else
		printf("�������ݲ�������\n");
	return 0;
}
/*����ԭ����vs2019�У�scanf_s���Զ������������ת��Ϊʵ�ͣ��ʸ÷������������ж�scanf������*/