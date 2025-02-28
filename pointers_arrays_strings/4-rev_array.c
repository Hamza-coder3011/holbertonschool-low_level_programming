#include <stdio.h>
#include "main.h"
/**
* reverse_array - Reverses the content of an array of intergers.
* @n: The number of elements of the array.
* @a: Pointer to the array.
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)

	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
