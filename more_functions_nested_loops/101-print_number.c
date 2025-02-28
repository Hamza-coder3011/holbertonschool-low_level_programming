#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
* print_number - Prints an integer unsing only _putchar
* @n: The integer to print
*/
int _putchar(char c)
	{
		return write(1, &c, 1);
	}
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
