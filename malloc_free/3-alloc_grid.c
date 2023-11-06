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
	int i = 0 ;
	int h= 0;
	int grid = malloc(sizeof(int)*(width*height));
	while (i<width)
	{
		while (h<width)
		{
			/* code */
		}
		printf('\n');
	}
	
	if (width =="0" || height =="0")
	{
		return (1);
	}
	
	return(grid);
}
