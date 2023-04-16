#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int sum, i, j;

	sum = 0;
	i = 1
		;
	if (argc == 1)
{
		printf("0\n");
		return (0);
}
	while (i < argc)
{
		for (j = 0; argv[i][j] != '\0'; j++)
{
			if (!isdigit(argv[i][j]))
{
				printf("Error\n");
				return (1);
}
}
	sum += atoi(argv[i]);
	i++;
}
	printf("%d\n", sum);
	return (0);
}

