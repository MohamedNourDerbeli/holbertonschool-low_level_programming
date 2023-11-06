#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - Entry point
 * @nmemb : char
 * @size : char
 * Return: void (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *allc;
	unsigned int i;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	allc = malloc(nmemb * size);
	if (allc == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size)
	{
		allc[i] = 0;
		i++;
	}

	return (allc);
}
