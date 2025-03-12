#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - Concatenates all arguments of the program.
* @ac: Argument count.
* @av: Argument vector.
*
* Return: Pointer to a new string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
	int i, j, length = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
		length++;
	}

	result = malloc(sizeof(char) * (length + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[length++] = av[i][j];
		}
		result[length++] = '\n';
	}

	result[length] = '\0';
	return (result);
}
