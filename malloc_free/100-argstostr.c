#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* argstostr - Concatenates all arguments of the program.
* @ac: Argument count.
* @av: Argument vector.
*
* Return: Pointer to a new string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
	int i, j, total_len = 0, index = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]) + 1;

	result = malloc(sizeof(char) * (total_len + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[index++] = av[i][j];
		}
		result[index++] = '\n';
	}
	result[index] = '\0';

	return (result);
}
