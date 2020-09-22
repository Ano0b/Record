#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	printf("请输入一个整数\n");
	scanf_s("%lf", &a);
	if (floor(a + 0.5) == a)
		printf("a=%f", a);
	else
		printf("输入数据不是整数\n");
	return 0;
}
/*修改成功，昨日错误原因为a的定义类型与输出不符*/