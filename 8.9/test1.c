/*����ʽ���϶�ת�����϶�*/
#include"stdio.h"
void main()
{
	int fahrenheit;
	float celsius;
	printf("���뻪�϶�\n\n");
	scanf_s("%d", &fahrenheit);
	printf("\n");
	celsius = (fahrenheit-32)/1.8;
	if (fahrenheit <= 200)
	printf("%d %5.2f\n", fahrenheit, celsius);
	else
	{
		printf("��ֵ����");
	}
	
}