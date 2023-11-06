#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - Entry point
 * @b : int
 * Return: void (Success)
 */
void *malloc_checked(unsigned int b)
{
	int *checked = malloc(sizeof(char) * b);

	if (checked == NULL)
	{
		return ('98');
	}

	return (checked);
}
