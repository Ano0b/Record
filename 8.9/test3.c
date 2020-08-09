/*输入变量a，b，c，计算x*/
#include<stdio.h>
void main()
{
	int a, b, c;
	double x;
	printf("输入a,b,c\n");
	scanf_s("%d %d %d", &a, &b, &c);
	x = a / (b - c);
	printf("%5.2f\n", x);
}
/*失败，同样是x不显示小数点后的位,应该与tset1同理，但是不能得出相同解*/