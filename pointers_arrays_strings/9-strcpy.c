#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - check the code
 * @src : char
 * @dest : char
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
