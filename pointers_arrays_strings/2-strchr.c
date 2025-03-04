#include "main.h"
#include <stddef.h>
/**
* _strchr - Locates the first occurrence of a character in a string
* @s: The string to search
* @c: The character to locate
*
* Return: A pointer to the first occurrence of the charactere c
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s ==c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
