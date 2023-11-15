#include "dog.h"
/**
 * init_dog - check the code
 * @name : char
 * @age : float
 * @owner : char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d;

	d->age = age;
	d->name = name;
	d->owner = owner;

	return (0);
}
