/*����ʽ���϶�ת��*/
/*���϶�ת��Ϊ���϶�*/
#include<stdio.h>
#define F_MAX 250
main()
{
	typedef float REAL;
	REAL fahrenheit, celsius;
	printf("���뻪�϶�\n\n");
	scanf_s("%f", &fahrenheit);
	celsius = (fahrenheit - 32.0) / 1.8;
	if (fahrenheit <= F_MAX)
		printf("%.2f %.2f\n", fahrenheit, celsius);
	else
		printf("��ֵ����\n\n");
	return 0;
}
/*�޸ĳɹ�������Ϊ����ʱȡ�ı������Ͳ���*/