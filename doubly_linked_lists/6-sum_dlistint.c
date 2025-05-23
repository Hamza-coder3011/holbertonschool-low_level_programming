#include "lists.h"
/**
* sum_dlistint - Returns the sum of all the data in a dlistint_t linked list
* @head: Pointer to the end of the list
*
* Return: The sum of all the data in the list, or 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
