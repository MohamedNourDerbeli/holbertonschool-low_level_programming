#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * alloc_grid - Entry point
 * @width : int
 * @height : int
 * Return: void (Success)
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(height * sizeof(int *));
	}

	return (array);
}
