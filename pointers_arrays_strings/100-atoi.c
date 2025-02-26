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
	int sign = 1;
	int num = 0;
	int found_digit = 0;

	while (*s)
	{

	if (*s == '-' || *s == '+')
	{
		if (!found_digit)
		{
			if (*s == '-')
			sign *= -1;
		}
	}

	else if (*s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');
		found_digit = 1;
	}

	else if (found_digit)
	{
		break;
	}

	s++;
	}

	return (num * sign);
}
