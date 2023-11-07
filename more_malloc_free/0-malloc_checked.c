#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * @b : int
 * Return: void (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *check = (char*) malloc(b);

	if (check == NULL)
		exit(98);

	return (check);
}
