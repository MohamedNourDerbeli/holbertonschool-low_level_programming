#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - check the code
 * @src : char
 * @dest : char
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = strlen(dest);

	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
