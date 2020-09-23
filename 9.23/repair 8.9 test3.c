/*输入变量a，b，c，计算x*/
#include<stdio.h>
void main()
{
	float a, b, c,x	;
	printf("输入a,b,c\n");
	scanf_s("%f %f %f", &a, &b, &c);
	x = a / (b - c);
	printf("x=%.2f\n", x);
}
/*修改成功，也是abcx定义问题*/