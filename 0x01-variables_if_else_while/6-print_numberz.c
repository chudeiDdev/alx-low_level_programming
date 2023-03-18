#include <stdio.h>

/**
 *main - prints numbers from base 10
 *Return: 0 sucessgul
*/

int main(void)
{
	int i = 0;
	int num;

	num = 48;
	while (i < 10)
{
		putchar(num + i);
		i++;
}
	putchar('\n');
	return (0);
}
