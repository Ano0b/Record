/*打印邮寄格式*/
#include <stdio.h>
#include<ctype.h>
int main()
{
	char name, city;
	name = ' ';
	city = ' ';
	printf("请输入姓名、地址");
	while (name != '\n')
		{
			name = getchar();
		}
	while (city != '\n')
		{
			city = getchar();
		}
	printf("\n\n%s %s\n", name, city);
	return 0;
}
/*失败，不能执行输出*/