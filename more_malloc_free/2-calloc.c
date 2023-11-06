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
	char *allc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	allc = malloc(nmemb * size);
	if (allc != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			allc[i] = 0;
		return (allc);
	}
	else
		return (NULL);
}
