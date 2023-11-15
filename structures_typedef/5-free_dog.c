#include "dog.h"
/**
 * *new_dog - check the code
 * @name : char
 * @age : float
 * @owner : char
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	free(d->name);
	free(d->owner);
	free(d);
}
