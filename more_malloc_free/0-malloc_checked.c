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
	char *checked;
	unsigned int i;
	
	checked = malloc(b);
	if (checked != NULL)
	{
		for (i = 0; i < b; i++)
			checked[i] = 0;
		return (checked);
	}
	else
		exit(98);
}
