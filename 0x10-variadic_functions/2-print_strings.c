#include "variadic_functions.h"

/**
 * print_strings - Prints a number followed by a separator
 * @separator: This is the string to separate the numbers
 * @n: This is the number of arguments
 *
 * Return: Null void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;

	va_start(ar, n);

	for (i = 0; i < n; i++)
{
	const char *str = va_arg(ar, const char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
	if (i < n - 1 && separator != NULL)
		printf("%s", separator);
}

	va_end(ar);
	printf("\n");
}
