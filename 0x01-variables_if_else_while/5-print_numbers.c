#include <stdio.h>

/**
 * main - prints numbers 0 to 9
 * Return: 0 sucessfully
*/

int main(void)
{
	int i;
	char number;

	number = '0';
	for (i = 0; i < 10; i++)
{
		putchar(number + i);
}
	putchar('\n');
	return (0);
}
