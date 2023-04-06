#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: represents the number
 *
 * Return: the factorial of the number
 */
int factorial(int n)
{
	int new_factorial;

	if (n < 0)
{
		return (-1);
}
	else if (n == 0)
{
		return (1);
}
	new_factorial = factorial(n - 1);

	return (n * new_factorial);
}
