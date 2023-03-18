#include <stdio.h>
/**
 *main - print values 0-9
 *seperated with a ','
 *Return: 0 sucessfull
*/

int main(void)
{
	int i;
	int num;

	num = 48;
	for (i = 0; i < 10; i++)
{
		if (i > 0)
{
			putchar(',');
			putchar(' ');
}
	putchar(num + i);
}
	putchar('\n');
	return (0);
}

