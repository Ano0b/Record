#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	printf("请输入一个整数\n");
	if (scanf_s("%d %f %c", &a,&b,&c) == 3)
		printf("输入数据是整数\n");
	else
		printf("输入数据不是整数\n");
	return 0;
}
/*完全照抄例题却可以正常运行*/