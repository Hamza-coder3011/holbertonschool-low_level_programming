#include "main.h"
#include <stdio.h>
/**
* simple_print_buffer - print buffer in hexa
* @buffer: the address of memory to print
* @size: the size of the memory to print
*
* Return: Nothing
*/
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i = 0;

	while (i < size)
	{
		if (i % 10 == 0 && i)
		{
		printf("\n");
		}
		printf("0x%02x ", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
* _memset - fils memory with a constant byte
* @s: pointer to the memory area
* @b: the constant byte to fill
* @n: the number of bytes to fill
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
