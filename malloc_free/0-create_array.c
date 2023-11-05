#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Entry point
 * @size : integer
 * @c : char
 * Return: void (Success)
 */
char *create_array(unsigned int size, char *c)
{
	unsigned int i = 0;

	c = malloc(sizeof(c) * size);

	if (size == 0)
	{
		return (0);
	}

	while (i < size)
	{
		c[i] = c;
		i++;
	}
	return (c);
	free(c);
}
