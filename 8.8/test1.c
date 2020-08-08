/*学习scanf函数用法*/
#include<stdio.h>
int main()
{
	int number;
	printf("enter an integer number \n");
	scanf_s("%d", &number);
	if (number < 100)
		printf("your number is smaller than 100 \n \n");
	else
		printf("your number contains more than two digits \n");
	return 0;
}