#include <stdio.h>
/**
 *main - prints both lower and uppercase
 *Return: 0 sucessful
*/
int main(void)
{
	int i = 0;
	char letter;

	letter = 'a';

	while (i < 26)
{
		putchar(letter + i);
		i++;
}
	letter = 'A';

	for (i = 0; i < 26; i++)
{
	putchar(letter + i);
}
	putchar('\n');

	return (0);
}


