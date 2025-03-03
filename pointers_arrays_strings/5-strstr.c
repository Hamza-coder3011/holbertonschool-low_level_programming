#include "main.h"
#include <stddef.h>
/**
* _strstr - locates a substring in a string
* @haystack: the main string to search in
* @needle: the substring to find
*
* Return: pointer to the first occurrence of needle or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	if (haystack == NULL || needle == NULL)
	return (NULL);

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				break;
			}
			if (needle[j] == '\0')
			return (&haystack[i]);
		}
	}
	return NULL;
}
