#include "main.h"

/**
 * _sqrt - returns the squareroot of a number
 * @n: number
 * @y: buffer
 * Return: the square root of n
 */

int _sqrt(int n, int y)
{
	if (n == 1)
{
		return (1);
}
	else if (y == n || n < 0)
{
		return (-1);
}
	else if (y * y == n)
{
		return (y);
}
	else
		return (_sqrt(n, y += 1));
}

/**
 * _sqrt_recursion - returns to the main program
 * @n: number used
 *
 * Return: An int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
