#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Record a dog infos
 * @name: the dod's name
 * @age: the dod's age
 * @owner: the dod's owner
 */
typedef struct dog
{
	char *name, *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
