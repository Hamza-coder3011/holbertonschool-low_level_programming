#include "main.h"
#include <stdio.h>
/**
* rev_string - reverse a string value
*
* @s: string to print
*/
void rev_string(char *s)
{
	int counter = 0, i;
	char temp;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter / 2; i++)
	{
		temp = s[i];
		s[i] = s[counter - 1 - i];
		s[counter - 1 - i] = temp;
	}
}
