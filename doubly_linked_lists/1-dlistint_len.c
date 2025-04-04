#include "lists.h"

/**
* dlistint_len - Returns the number of elements in a linked list
* @h: The pointer that returns the number of element
*
* Return: Number of elements linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
