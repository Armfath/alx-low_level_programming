#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - create a dog infos
 * @name: the dod's name
 * @age: the dod's age
 * @owner: the dod's owner
 *
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int len_name = 0, len_owner = 0, i;

	len_name = strlen(name) + 1;
	len_owner = strlen(owner) + 1;
	n_dog = malloc(sizeof(dog_t));
	if (!n_dog)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(len_name * sizeof(n_dog->name));
	if (!n_dog->name)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(len_owner * sizeof(n_dog->owner));
	if (!n_dog->owner)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
	{
		n_dog->name[i] = name[i];
	}
	n_dog->age = age;
	for (i = 0; i < len_owner; i++)
	{
		n_dog->owner[i] = owner[i];
	}
	return (n_dog);
}
