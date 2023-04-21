#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to the function
 *
 * Return: Null void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
{
		return (1);
}
	f(name);
}

