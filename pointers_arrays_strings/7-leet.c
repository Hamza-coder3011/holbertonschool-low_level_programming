#include "main.h"
/**
* leet - encodes a string into 1337.
* @str: The string to encode.
*
* Return: the encoded string.
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
