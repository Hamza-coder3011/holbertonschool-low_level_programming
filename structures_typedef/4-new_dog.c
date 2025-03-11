#include <stdlib.h>
#include "dog.h"

/**
* struct dog - structure representing a dog
* @name: Name of the dog.
* @age: Age of the dog.
* @owner: Owner of the dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
* _strdup - Custom implementation of strdup() for environments
* where strdup is not available.
* @str: The string to duplicate.
*
* Return: A pointer to the new string, or NULL if it fails
*/
char *_strdup(const char *str)
{
	size_t len = 0;
	size_t i;
	char *new_str;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_str = malloc(len + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		new_str[i] = str[i];

	new_str[len] = '\0';

	return (new_str);
}

/**
* print_dog - Prints the information of a dog.
* @d: Pointer to the dog structure to print.
*
* Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

/**
* new_dog - Creates a new dog.
* @name: The dog's name.
* @age: The dog's age.
* @owner: The owner's name.
* @d: Pointer to the dog structure to print.
* Return: A pointer to the new dog, or NULL if it fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}

	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
