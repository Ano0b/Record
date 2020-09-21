/*getchar¡¢getch¡¢getche¡¢putcharµÄÑ§Ï°*/
#include<stdio.h>
#include<conio.h>
int main()
{
	char c1, c2, c3;
	c1 = _getch();
	putchar(c1); putchar('\n');
	c2 = _getche();
	putchar(c2); putchar('\n');
	c3 = getchar();
	putchar(c3);
	return 0;
}