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
	int i,j;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	putchar(dest);
}