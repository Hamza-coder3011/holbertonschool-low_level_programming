#include "main.h"

/**
* set_bit - Sets the value of a bit to 1 at a given index
* @n: The number in which the bit will be set
* @index: The index of the bit to be set, starting from 0
*
* Return: 1 if it worked, or -1 if an error accurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
