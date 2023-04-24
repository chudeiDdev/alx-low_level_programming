#include "variadic_functions.h"

/**
 * print_numbers - Prints a number followed by a separator
 * @separator: This is the string to separate the numbers
 * @n: This is the number of arguments
 *
 * Return: Null void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;

	va_start(ar, n);

	for (i = 0; i < n; i++)
{
		int num = va_arg(ar, int);

		printf("%d", num);

		if (i < n - 1 && separator != NULL)
{
		printf("%s", separator);
}
}
	va_end(ar);
	putchar('\n');
}

