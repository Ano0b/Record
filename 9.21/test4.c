#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个整数\n");
	scanf_s("%d", &a);
	if(scanf_s("%d", &a) == 1)
		printf("输入数据是整数\n");
	else
		printf("输入数据不是整数\n");
	return 0;
}
/*教科书例题，但是不能执行达成条件时的输出。*/