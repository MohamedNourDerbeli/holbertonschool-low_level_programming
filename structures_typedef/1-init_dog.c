#include "dog.h"
/**
 * init_dog - check the code
 * @name : char
 * @age : float
 * @owner : char
 * @d : d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->age = age;
	d->name = name;
	d->owner = owner;
	}
}
