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
	int sign = 1, num = 0;

	while (*s && (*s < '0' || *s > '9') && *s != '-' && *s != '+')
	{
		s++;
	}

	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');
		s++;
	}

	return (num * sign);
}
