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
	int o = 0;
	int *mall = malloc((width * height) * sizeof(int));
	while (i < width)
	{
		mall[i] = 0;
		i++;
	}
	return (mall);
}
