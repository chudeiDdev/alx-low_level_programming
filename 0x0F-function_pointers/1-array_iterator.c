#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - applies function to an array of items
 * @array: an array of integers
 * @size: size of the array
 * @action: pointer to the function to be applied
 *
 * Return: Null void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	while (i < size)
{
		action(array[i]);
		i++;
}
}
