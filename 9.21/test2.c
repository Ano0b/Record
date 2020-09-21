/*整数判断，失败，若a为整数，输出始终为零*/
#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	printf("请输入一个整数\n");
	scanf_s("%lf", &a);
	if (floor(a + 0.5) == a)
		printf("a=%2d",a);
	else
		printf("输入数据不是整数\n");
	return 0;
}