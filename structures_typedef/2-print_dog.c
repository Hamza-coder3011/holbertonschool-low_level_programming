#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
* print_dog - Prints the information of a dog.
* @d: Pointer to the dog structure to print.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}

	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
