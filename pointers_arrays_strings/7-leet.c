#include "main.h"
#include <stdio.h>
/**
* Leet - encodes a string 1337.
* @str: The string to encode.
*
* Return: The encoded string.
*/
char *leet(char *str)
{
	int i = 0;
	int j;
	char mapping[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	while (str[i])
	{
		for (j = 0; mapping[j] != '\0'; j++)
		{
			if (str[i] == mapping[j])
			{
				str[i] = leet[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
