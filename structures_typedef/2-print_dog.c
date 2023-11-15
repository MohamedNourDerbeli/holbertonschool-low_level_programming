#include "dog.h"
/**
 * print_dog - check the code
 * @name : char
 * @age : float
 * @owner : char
 * @d : d
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "Name: (nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "Owner: (nil)";
	}
	printf("%s", d->name);
	printf("%d", d->age);
	printf("%s", d->owner);
}
