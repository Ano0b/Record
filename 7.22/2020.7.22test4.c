/*ʹ��mul�����ļ�ʾ�������Ϊmultiplication of 5 and 10 is 50*/
#include<stdio.h>
int mul(int a, int b);
int main()														/*˵������������*/
{
	int a, b, c;
	a = 5;
	b = 10;
	c = mul(a, b);												/*cΪmul(a,b)��ֵ*/
	printf("multiplication of %d and %d is %d", a, b, c);		/*˵���������a,b,c��������ֵ*/
	return 0;
}
int mul(int x, int y)											/*˵������mul����*/
{
	int p;
	p = x * y;
	return (p);

}