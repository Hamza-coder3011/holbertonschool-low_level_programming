#include "main.h"
#include <stdio.h>
/**
* _pow_recursion - Returns x raised to the power of y using recursion
* @x: The base.
* @y: The exponent
*
* Return: The value of x raised to the power of y.
*returns -1 if y is negative.
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}
