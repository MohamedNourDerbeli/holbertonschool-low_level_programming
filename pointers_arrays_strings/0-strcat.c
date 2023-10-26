#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * swap_int - check the code
 * @src : char
 * @dest : char
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;

	int j = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}

	src[i + j] = '\0';
}
