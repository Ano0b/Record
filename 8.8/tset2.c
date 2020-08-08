/*第一个可交互程序*/
#include<stdio.h>
int main()
{
	int year, period;
	float amount, inrate, value;
	printf("input amount interest rate, and period\n\n");
	scanf_s("%f %f %d", &amount, &inrate, &period);
	printf("\n");
	year = 1;
	while (year <= period)
	{
		value = amount + inrate * amount;
		printf("%2d Rs %8.2f\n", year, value);
		amount = value;
		year = year + 1;
	}
	return 0;
}