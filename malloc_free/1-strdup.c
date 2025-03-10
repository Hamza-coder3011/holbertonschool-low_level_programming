#include <stdlib.h>
#include "main.h"
/**
* _strdup - Duplicates a string using dynamic memory allocation.
*
* @str: The input string to duplicate.
*
* Return: A pointer to the duplicated string, or NULL if str is NULL
*		or if memory allocation fails.
*/
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
