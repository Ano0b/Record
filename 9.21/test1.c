/*scanf和printf函数的学习*/
#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	printf("请输入一个整数\n");
	scanf_s("%lf", &a);
	if (floor(a + 0.5) == a)
		printf("输入数据是整数\n");
	else
		printf("输入数据不是整数\n");
			return 0;
}