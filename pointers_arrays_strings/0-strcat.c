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
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}