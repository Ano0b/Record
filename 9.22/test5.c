#include<stdio.h>
int main()
{
	char a;
	if (scanf_s("%c", &a) == 1)
		printf("a=%c\n",a);
	else
		printf("�������ݲ�������\n");	
	return 0;
}
/*vs2019��ʵ��test2����,ʧ�ܣ���vs�У�char�Ķ����ƺ���int������*/