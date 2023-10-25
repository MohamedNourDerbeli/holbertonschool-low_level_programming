#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - check the code
 * @src : char
 * @dest : char
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do
	{
		i++;
		dest[i] = src[i];
	} while (src[i] != '\n');
	return (dest);
}
