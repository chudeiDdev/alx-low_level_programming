#include "main.h"

/**
 * is_prime_number - returns the 1 if n is prime
 * @n: number passed in
 *
 * Return: 1 if n is prime, 0 != 1
 */

int is_prime_number(int n)
{
	int first = n / 2;

	if (n <= 1)
{
		return (0);
}
	return (is_prime(n, first));
}

/**
 * is_prime - returns the 1 if n is prime
 * @n: number
 * @first: number to start checking from
 *
 * Return: 1 if n is prime, 0 != prime
 */
int is_prime(int n, int first)
{
	if (first <= 1)
{
		return (1);
}
	else if (n % first == 0)
{
		return (0);
}
	return (is_prime(n, first -= 1));
}

