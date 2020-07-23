///*计算利息为11%，初始资金为5000，10年内的利息情况*/
//#include<stdio.h>
//#define PERIOD 10								/*定义period为10，也就是说存期10年*/
//#define PRINCIPAL 5000.00						/*定义principal为5000.00，也就是说初始资金为5000*/
//int main()
//{
//	int year;
//	float amount, value, inrate;
//	amount = PRINCIPAL;
//	inrate = 0.11;
//	year = 0;
//	while (year <= PERIOD)						/*当型循环，不满足条件输出*/
//	{
//		printf("%2d %8.2f\n", year, amount);
//		value = amount + inrate * amount;
//		year = year + 1;
//		amount = value;
//	}
//	return 0;
//}