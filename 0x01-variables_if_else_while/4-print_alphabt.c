#include<stdio.h>
/**
 *main - prints both the upper and lower case alphabets
 *Return: 0 successfully
*/

int main(void)
{
	int i = 0;
	char letter = 'a';

	while (i < 26)
{
		if (!(letter + i == 'q' || letter + i == 'e'))
		putchar(letter + i);
		i++;
}
	putchar('\n');
	return (0);
}
