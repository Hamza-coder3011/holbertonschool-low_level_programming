#include "main.h"
#include <stdio.h>
/**
* rev_string - reverse a string value
*
* @s: string to print
*/
void rev_string(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; --i)
	{
		_putchar(s[i]);
	}
}
