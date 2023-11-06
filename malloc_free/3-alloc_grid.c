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
	int w;
	int h;
	typedef int *intpointer;
	intpointer *grid = malloc((width * height) * sizeof(int));
	if (grid == NULL)
	{
		return (NULL);
	}

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h]);
			w++;
		}
		printf("\n");
		h++;
	}

	return (grid);
}
