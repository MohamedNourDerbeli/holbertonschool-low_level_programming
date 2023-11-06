#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * alloc_grid - Entry point
 * @s1 : char
 * @s2 : char
 * Return: void (Success)
 */
int **alloc_grid(int width, int height)
{
	if (height <=0 || width <=0)
	{
		return(NULL);
	}
	int **array;
	int i;

	array = malloc(width * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int *));
	}

	return (array);
}
