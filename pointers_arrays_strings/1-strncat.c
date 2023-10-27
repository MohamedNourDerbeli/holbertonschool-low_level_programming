#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - check the code
 * @src : char
 * @dest : char
 * @n : integer
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
