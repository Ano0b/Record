/*交互式华氏度转换摄氏度*/
#include"stdio.h"
void main()
{
	int fahrenheit;
	float celsius;
	printf("输入华氏度\n\n");
	scanf_s("%d", &fahrenheit);
	printf("\n");
	celsius = (fahrenheit-32)/1.8;
	if (fahrenheit <= 200)
	printf("%d %5.2f\n", fahrenheit, celsius);
	else
	{
		printf("数值错误");
	}
	
}