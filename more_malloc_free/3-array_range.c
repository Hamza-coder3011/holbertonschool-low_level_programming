#include <stdlib.h>
#include "main.h"
/**
* array_range - Creates an array of integers from min to max.
*
* @min: The minimum value (included).
* @max: The maximum value (included).
*
* Return: Pointer to the newly allocated array,
*		NULL if min > max or if malloc fails.
*/
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
