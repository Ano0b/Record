/*交互式华氏度转换*/
/*摄氏度转换为华氏度*/
#include<stdio.h>
#define F_MAX 250
main()
{
	typedef float REAL;
	REAL fahrenheit, celsius;
	printf("输入华氏度\n\n");
	scanf_s("%d", &fahrenheit);
	celsius = (fahrenheit - 32.0) / 1.8;
	if (fahrenheit <= F_MAX)
		printf("%5.1f %7.2f\n", fahrenheit, celsius);
	else
		printf("数值错误\n\n");
	return 0;
}
/*尝试失败，错误为只输出华氏度为零时对应的摄氏度*/