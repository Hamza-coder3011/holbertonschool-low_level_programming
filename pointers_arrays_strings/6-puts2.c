#include "main.h"
#include <stdio.h>
/**
* puts2 - function should print only one character out of two
* starting with the first one
* @str: input
* Return: print
*/
void puts2(char *str)
{
	int longi = 0, o;

	while (str[longi] != '\0')
	{
		longi++;
	}

	for (o = 0; o < longi; o += 2)
	{
		_putchar(str[o]);
	}
	_putchar('\n');
}
