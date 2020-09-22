#include<stdio.h>
int main()
{
	float a;
	int b;
	printf("请输入一个整数\n");
	if (scanf_s("%f %d", &a,&b) == 2)
		printf("输入数据是整数\n");
	else
		printf("输入数据不是整数\n");
	return 0;
}
/*错误原因：在vs2019中，scanf_s会自动将输入的整型转化为实型，故该方法不能用于判断scanf的输入*/