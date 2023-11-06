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
	int *array = malloc((sizeof(int) * width)*height);
	int i;

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		array = malloc(sizeof(int*) *height);
	}
	return(array);
}
