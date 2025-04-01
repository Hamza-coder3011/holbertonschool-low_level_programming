#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: The pointer that returns the number of elements
 *
 * Return: Number of elements linked
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
