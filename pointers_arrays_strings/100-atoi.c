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
	int started = 0;

	while (*s)
	{

	if (*s == '-' || *s == '+')
	{
		if (!started)
		{
			if (*s == '-')
			sign *= -1;
		}
		else
			break;
	}

	else if (*s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');
		started = 1;
	}

	else if (started)

		break;

	s++;
	}
	return (num * sign);
}
