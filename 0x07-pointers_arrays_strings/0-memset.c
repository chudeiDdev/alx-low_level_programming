#include "main.h"`
/**
 * _strchr - locates character in string
 * @s: string to locate char
 * @c: character to find
 * Return: character value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	        
	i = 0;

	while (i < n)
{
		*(s + 1) = b;
		i++;
}
	return (s);
}
