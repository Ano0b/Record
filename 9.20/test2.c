/*��ӡ�ʼĸ�ʽ*/
#include <stdio.h>
#include<ctype.h>
int main()
{
	char name, city;
	name = ' ';
	city = ' ';
	printf("��������������ַ");
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
/*ʧ�ܣ�����ִ�����*/