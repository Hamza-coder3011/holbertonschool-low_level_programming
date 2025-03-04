#include "main.h"
#define NULL ((void *)0)
/**
* _strchr - locates a character in a string
* @s: the string to search
* @c: the character to locate
*
* Return: pointer to the s
*/
char *_strchr(char *s, char c)
{
	int index = 0;
	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
				return (&[index]);
		}
	}
	if (c == '\0')
	{
		return (&[index]);
	}
	return (NULL);
}
