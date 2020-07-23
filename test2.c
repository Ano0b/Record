/*计算两数相加*/
#include<stdio.h>
int main()
{
	int number;						/*定义number为整数*/
	float amount;					/*定义amount为浮点数，即小数*/
	number = 100;					/*为number赋值*/
	amount = 30.75 + 75.35;			/*为amount赋值*/
	printf("%d\n", number);			/*%d\n表示输出为十进制整数*/
	printf("%5.2f", amount);		/*%5.2\f表示输出为五位，其中小数点后有两位*/
	return 0;
}