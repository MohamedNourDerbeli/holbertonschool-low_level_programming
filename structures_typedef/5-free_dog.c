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
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
}
