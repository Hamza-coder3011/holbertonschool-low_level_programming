#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index
* @n: The number in which the bit will be cleared
* @index: The index of the bit to be cleared, starting from 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NUUL)
	{
		return (-1);
	}
	
	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
