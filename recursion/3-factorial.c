#include "main.h"
#include <stdio.h>
/**
* factorial - Returns the factorial of a given number.
* @n: The number for which the factorial is to be computed.
* Return: The factorial of the number, or -1 if the number is negative.
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
