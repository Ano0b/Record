/*编写一个5x+8y=18的线性方程*/
#include<stdio.h>
void main()
{
	float x,y;
	printf("输入x\n\n");
	scanf_s("%f", &x);
	y = (18 - (5 * x)) / 8;
	printf("x=%.2f y=%.2f\n", x,y);
}
/*修改成功，错误原因为xy定义错误，应为float*/