#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print a dog infos
 * @d: the dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %.1f\n", d->age);
		printf("Name: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
