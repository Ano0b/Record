#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	printf("������һ������\n");
	scanf_s("%lf", &a);
	if (floor(a + 0.5) == a)
		printf("a=%f", a);
	else
		printf("�������ݲ�������\n");
	return 0;
}
/*�޸ĳɹ������մ���ԭ��Ϊa�Ķ����������������*/