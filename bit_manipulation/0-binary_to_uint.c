#include "main.h"

/**
* binary_to_uint - Converts a binary number to an insigned int
* @b: Pointer to a string of 0 and 1 chars
*
* Return: The converted number, or 0 if b is NULL
*		or contains chars other than 0 and 1
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL || *b == '\0')
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) | (*b - '0');
		b++;
	}

	return (result);
}
