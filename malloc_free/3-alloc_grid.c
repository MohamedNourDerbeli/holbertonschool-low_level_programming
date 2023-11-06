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
	int i = 0;
	int *grid = malloc(sizeof(int) * (width * height));
	while (i < width)
	{
		int h = 0;
		while (h < width)
		{
			printf("%d", grid[i]);
			h++;
		}
		printf("\n");
		i++;
	}

	return (grid);
}
