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
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(max - min);
	for (i = 0; i < max - min; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
