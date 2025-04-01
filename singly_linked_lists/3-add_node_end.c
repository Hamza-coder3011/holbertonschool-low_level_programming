#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - Add a new node at the end of a list
* @head: Pointeur to the beginning of the list
* @str: String to add
* Return: Address of the element, NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp = *head;
	size_t length = 0;

	if (!new_node || !str)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	while (str[length] != '\0')
		length++;


	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
