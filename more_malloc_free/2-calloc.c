#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Entry point
 * @s1 : char
 * @s2 : char
 * @n : int
 * Return: void (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *allc;
	if (nmemb == 0|| size ==0)
	{
		return(NULL);
	}
	allc = (int*)calloc(nmemb ,sizeof(int));
	if (allc==NULL)
	{
		return(NULL);
	}
	
}
