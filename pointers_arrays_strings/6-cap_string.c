#include <stdio.h>
#include "main.h"
/**
* cap_string - Capitalizes all words of a string.
* @str: Pointer to the string.
*
* Return: Pointer to the modified string.
*/
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;
	int j;

	char separators[] = " \t\n,;.!\"(){}";

	while (str[i])
	{
	if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
	{
		str[i] = str[i] - 32;
	}

	capitalize_next = 0;

	j = 0;
	while (separators[j] != '\0')
	{
		if (str[i] == separators[j])
		{
			capitalize_next = 1;
			break;
		}
		j++;
	}
	i++;
	}

	return (str);
}
