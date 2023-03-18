#include <stdio.h>
/**
 *main - code entery
 *Return: 0 sucessfull
*/

int main(void)
{
	char letter, num;
	int i;

	num = '0';
	for (i = 0; i < 10; i++)
{
		putchar(num + i);
}
	letter = 'a';
	for (i = 0; i < 6; i++)
{
	putchar(letter + i);
}

	putchar('\n');
	return (0);
}

