#include "dog.h"
/**
 * *new_dog - check the code
 * @name : char
 * @age : float
 * @owner : char
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int l1, l2;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	l1 = strlen(name);
	d->name = malloc(sizeof(char) * (l1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	l2 = strlen(owner);
	d->owner = malloc(sizeof(char) * (l2 + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
	return (d);
}
