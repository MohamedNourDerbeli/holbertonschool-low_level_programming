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
	int *array = malloc(sizeof(int) * (width * height));
	int i = 0;
	int t = 0;
	
	if (array == NULL)
	{
		return (NULL);
	}

	while (t < height)
	{
		while (i < width)
		{
			printf("%d ", array[i] = 0);
			i++;
		}
		printf("\n");
		t++;
	}

	return (0);
}
