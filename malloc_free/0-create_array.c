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
	unsigned int i = 0;
	char *cs;

	cs = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (0);
	}

	while (i < size)
	{
		cs[i] = c;
		i++;
	}
	return (cs);
}
