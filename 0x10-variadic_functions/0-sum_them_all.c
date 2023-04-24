#include "variadic_functions.h"

/**
 * sum_them_all - adds all the arguments together
 * @n: first argument
 *
 * Return: an integer which is the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ar;

	if (n == 0)
		return (0);

	va_start(ar, n);

	sum = 0;

	for (i = 0; i < n; i++)
{
		int arg = va_arg(ar, int);

		sum += arg;

}
	va_end(ar);
	return (sum);
}
