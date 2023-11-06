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
int **alloc_grid( __attribute__((unused)) int width, __attribute__((unused)) int height)
{
	int **array= malloc(sizeof(int)*3);
	int i =0;
	while (i<height)
	{
		array[i]=malloc(sizeof(int)*3);
		i++;
	}
	printf("%d",array[2][3]);
	return(0);
	
}
