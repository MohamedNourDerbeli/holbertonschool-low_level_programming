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
int **alloc_grid(int width, __attribute__((unused)) int height)
{
	int w;
	int h;
	typedef int *intpointer;
	intpointer *grid = malloc(width * sizeof(intpointer));
	if (grid == NULL)
	{
		return (NULL);
	}
	if (grid[0][0] <= '0')
	{
		return (NULL);
	}
	else
	{

		h = 0;
		while (h < height)
		{
			w = 0;
			while (w < width)
			{
				printf("%d ", grid[h][w]);
				w++;
			}
			printf("\n");
			h++;
		}
	}

	return (grid[h][w]);
}
