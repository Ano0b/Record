#include<stdio.h>
int main()
{
	char a;
	if (scanf_s("%c", &a) == 1)
		printf("a=%c\n",a);
	else
		printf("输入数据不是整数\n");	
	return 0;
}
/*vs2019中实验test2猜想,失败，在vs中，char的定义似乎与int混淆了*/