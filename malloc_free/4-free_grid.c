#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - Entry point
 * @s1 : char
 * @s2 : char
 * Return: void (Success)
 */
void free_grid(int **grid, int height)
{
	grid =malloc(sizeof(int)*height);
	if (grid ==NULL)
	{
		return (1);
	}
	return(grid);
}
