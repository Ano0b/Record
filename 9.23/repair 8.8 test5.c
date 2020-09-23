/*交互式华氏度转换*/
/*摄氏度转换为华氏度*/
#include<stdio.h>
#define F_MAX 250
main()
{
	typedef float REAL;
	REAL fahrenheit, celsius;
	printf("输入华氏度\n\n");
	scanf_s("%f", &fahrenheit);
	celsius = (fahrenheit - 32.0) / 1.8;
	if (fahrenheit <= F_MAX)
		printf("%.2f %.2f\n", fahrenheit, celsius);
	else
		printf("数值错误\n\n");
	return 0;
}
/*修改成功，错误为输入时取的变量类型不对*/