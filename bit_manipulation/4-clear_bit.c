#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index
* @n: The number in which the bit will be cleared
* @index: The index of the bit to be cleared, starting from 0
*
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_index = sizeof(unsigned long int) * 8;

	if (!n || index >= max_index)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
