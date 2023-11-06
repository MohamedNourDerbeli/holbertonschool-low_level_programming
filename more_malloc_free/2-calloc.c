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
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	allc = (int *)calloc(nmemb, sizeof(int));
	if (allc == NULL)
	{
		return (NULL);
	}
	return (allc);
}
