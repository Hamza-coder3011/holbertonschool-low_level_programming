#include <string.h>
#include "main.h"
/**
*
* _strncat - Concatenates two strings, using at most n bytes from src.
* @dest: The destination string.
* @src: The source string.
* @n: The number of bytes to use from src.
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
