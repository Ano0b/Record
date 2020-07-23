/*该程序为函数使用示例，说明了cos函数的用法，计算0到180中每10度的余弦，并显示出标题和结果*/
#include<stdio.h>
#include<math.h>
#define PI 3.1416
#define MAX 180
int main()
{
	int angle;
	float x, y;
	angle = 0;
	printf("Angle Cos(angle) \n");
	while (angle <= MAX)
	{
		x = (PI / MAX) * angle;
		y = cos(x);
		printf("%15d %13.4f\n", angle, y);
		angle = angle + 10;
	}
	return 0;
}