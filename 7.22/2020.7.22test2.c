/*�����������*/
#include<stdio.h>
int main()
{
	int number;						/*����numberΪ����*/
	float amount;					/*����amountΪ����������С��*/
	number = 100;					/*Ϊnumber��ֵ*/
	amount = 30.75 + 75.35;			/*Ϊamount��ֵ*/
	printf("%d\n", number);			/*%d\n��ʾ���Ϊʮ��������*/
	printf("%5.2f", amount);		/*%5.2\f��ʾ���Ϊ��λ������С���������λ*/
	return 0;
}