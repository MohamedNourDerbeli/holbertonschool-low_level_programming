#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Entry point
 * @size : integer
 * @c : char
 * Return: void (Success)
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	int *cs;
	
	cs = malloc(sizeof(c) * size);

	if (size == NULL)
	{
		return (0);
	}

	while (i < size)
	{
		cs[i] = c;
		i++;
	}

	printf("%s\n", cs);
	return (0);
}
