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
	int *checked = malloc(b);

	if (checked == NULL)
	{
		printf("98");
		return ;
	}

	return (checked);
}
