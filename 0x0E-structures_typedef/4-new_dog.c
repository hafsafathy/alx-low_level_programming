#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: struct dog,
 * Return NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, nam, own;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL || !(name) || !(owner))
	{
		free(ptr);
		return (NULL);
	}

	for (nam = 0; name[nam]; nam++)
		;

	for (own = 0; owner[own]; own++)
		;

	ptr->name = malloc(nam + 1);
	ptr->owner = malloc(own + 1);

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < nam; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';

	ptr->age = age;

	for (i = 0; i < own; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';

	return (ptr);
}
