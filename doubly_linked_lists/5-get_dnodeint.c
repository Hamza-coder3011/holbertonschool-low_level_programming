#include "lists.h"
/**
* get_dnodeint_at_index - Returns the nth of a dlistint_t linked list
* @head: Pointer to the head of the list
* @index: Index of the node, starting from 0
*
* Return: Pointer to the nth node, or NULL if it failed
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
