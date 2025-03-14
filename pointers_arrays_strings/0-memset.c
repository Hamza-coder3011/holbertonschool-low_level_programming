#include "main.h"

/**
* _memset - fils memory with a constant byte
* @s: pointer to the memory area
* @b: the constant byte to fill
* @n: the number of bytes to fill
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
