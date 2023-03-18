#include <stdio.h>
/**
 *main - main entry
 *Return: 0 successfil
*/
int main(void)
{
	int i = 25;
	char letter;

	letter = 'a';
	while (i >= 0)
{
		putchar(letter + i);
		i--;
}
	putchar('\n');
	return (0);
}

