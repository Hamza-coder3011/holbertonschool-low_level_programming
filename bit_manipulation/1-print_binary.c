#include "main.h"
#include <stdio.h>

/**
* print_binary - Prints the binary representation of a number
* @n: The number to be printed in binary
*/
void print_binary(unsigned long int n)
{
	int bit_found = 0;
	unsigned long int mask = 1UL << 63;

	while (mask)
	{
		if (n & mask)
		{
			bit_found = 1;
			putchar('1');
		}

		else if (bit_found)
		{
			putchar('0');
		}

		mask >>= 1;
	}

	if (!bit_found)
		putchar('0');
}
