#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Record a dog infos
 * @name: the dod's name
 * @age: the dod's age
 * @owner: the dod's owner
 */
struct dog
{
	char *name, *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
