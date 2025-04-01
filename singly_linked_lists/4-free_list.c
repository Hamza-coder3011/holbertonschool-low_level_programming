#include <stdlib.h>
#include "lists.h"

/**
* free_list - Free all the allocated memory for a string list
* @head: Pointeur to the node of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
