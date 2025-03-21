#include "main.h"
#include <stdio.h>
/**
* _atoi - Converts a string to an integer
* @s: The string to convert
*
* Return: The converted integer
*/
int _atoi(char *s)
{

	unsigned int result = 0;
	int sign = 1;
	int i = 0;


	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
	if (s[i] == '-')
	{
	sign = -sign;
	}
	i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
	result = result * 10 + (s[i] - '0');
	i++;
	}

	return (result * sign);
}
