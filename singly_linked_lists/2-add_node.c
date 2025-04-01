#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node - Add a new node at the beginning of the list
* @head: The beginning of the list
* @str: The string to be printed
* Return: The address of the new element,
*	NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
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

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
