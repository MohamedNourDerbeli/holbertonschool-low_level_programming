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
	printf("%s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("%s\n", d->owner);
}
