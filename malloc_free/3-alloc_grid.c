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
	int **array = (int **)malloc(sizeof(int *) * width);
	int i;

	for (i = 0; i < width; i++)
	{
		array = (int *)malloc(sizeof(int *) * height);
		if (array == NULL)
		{
			return (NULL);
		}
	}
	return (array);
}
