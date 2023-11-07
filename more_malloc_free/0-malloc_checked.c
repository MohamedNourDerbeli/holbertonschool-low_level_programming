#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Entry point
 * @b : int
 * Return: void (Success)
 */
void *malloc_checked(unsigned int b)
{
	char *check = malloc(b);

	if (check == NULL)
		exit(98);

	return (check);
}
