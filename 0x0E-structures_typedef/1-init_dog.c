#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a dog infos
 * @d: the dog
 * @name: the dod's name
 * @age: the dod's age
 * @owner: the dod's owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
