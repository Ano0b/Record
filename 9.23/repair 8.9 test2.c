/*��дһ��5x+8y=18�����Է���*/
#include<stdio.h>
void main()
{
	float x,y;
	printf("����x\n\n");
	scanf_s("%f", &x);
	y = (18 - (5 * x)) / 8;
	printf("x=%.2f y=%.2f\n", x,y);
}
/*�޸ĳɹ�������ԭ��Ϊxy�������ӦΪfloat*/