#include "main.h"
#include <stddef.h>
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: input string to search
* @accept: character to match
*
* Return: pointer to first matching character or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if (!s || !accept)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			return (&s[i]);
		}
	}
	return (NULL);
}
