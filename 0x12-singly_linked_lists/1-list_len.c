#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *current;

	count = 0;
	current = h;

	while (current != NULL)
{
		count++;
		current = current->next;
}
	return (count);
}


