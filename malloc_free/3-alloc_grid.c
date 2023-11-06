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
int **alloc_grid(int width,  int height)
{
	int *array= malloc(sizeof(int)*(width* height));
	int i =0;
	if (array == NULL)
	{
		return(NULL);
	}
	
	while (i<height)
	{
		printf("%d",array[i]= 0);
		i++;
	}
	return(0);
	
}
