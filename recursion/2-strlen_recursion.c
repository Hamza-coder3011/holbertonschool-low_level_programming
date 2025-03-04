#include "main.h"
#include <stdio.h>
/**
* _strlen_recursion - Returns the length of a string using recursion.
* @s: The string whose length is to be computed.
* Return: The length of a string.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
