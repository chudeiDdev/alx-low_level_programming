#include <time.h>
#include <stdio.h>
/**
 * main - prints the lower case alphabets
 * Return: 0 sucessfully
*/

int main(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 26)
{
		putchar(letter + i);
		i++;
}
	putchar('\n');
	return (0);
}
