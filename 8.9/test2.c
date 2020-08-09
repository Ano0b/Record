/*编写一个5x+8y=18的线性方程*/
#include<stdio.h>
void main()
{
	int x;
	float y;
	printf("输入x\n\n");
	scanf_s("%d", &x);
	y = (18-(5 * x))/5;
	printf("%d %5.2f\n", x, y);
}
/*失败，只能输出整数，且x不能为小数，否则报错*/