#include <stdlib.h>
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

	n_dog = malloc(sizeof(dog_t));
	if (!n_dog)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;
	return (n_dog);
}
