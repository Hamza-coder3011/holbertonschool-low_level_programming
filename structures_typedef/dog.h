#ifndef DOG_H
#define DOG_H


#include <stdio.h>
#include <stdlib.h>
/**
* struct dog - Represents a dog with basic information.
* @name: The dog's name.
* @age: The dog's age.
* @owner: The owner's name.
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/**
* create_dog - Creates a dog and initializes its fields.
* @name: The dog's name.
* @age: The dog's age.
* @owner: The owner's name.
*
* Return: A pointer to the newly created dog,
*	or NULL if memory allocation fails.
*/
dog_t *create_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
