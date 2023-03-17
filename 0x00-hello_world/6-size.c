#include <stdio.h>

/**
 *main - should print the various types on the computer
 *Return: 0 if properly exited, non zero if otherwise
*/

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long: %d byte(s)\n", sizeof(long long));
	printf("size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
