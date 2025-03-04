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
	int *h, *n;

	if (*needle == '\0')
	return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
		return (haystack);

		haystack++;
	}
	return (NULL);
}
