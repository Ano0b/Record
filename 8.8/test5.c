/*����ʽ���϶�ת��*/
/*���϶�ת��Ϊ���϶�*/
#include<stdio.h>
#define F_MAX 250
main()
{
	typedef float REAL;
	REAL fahrenheit, celsius;
	printf("���뻪�϶�\n\n");
	scanf_s("%d", &fahrenheit);
	celsius = (fahrenheit - 32.0) / 1.8;
	if (fahrenheit <= F_MAX)
		printf("%5.1f %7.2f\n", fahrenheit, celsius);
	else
		printf("��ֵ����\n\n");
	return 0;
}
/*����ʧ�ܣ�����Ϊֻ������϶�Ϊ��ʱ��Ӧ�����϶�*/