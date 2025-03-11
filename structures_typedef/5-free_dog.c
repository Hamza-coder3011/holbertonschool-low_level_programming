#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees a dog
* @d: Pointer to the dog to free
*
* Return: Nothing
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
