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
	int len =strlen(dest);
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
		putchar(dest + '0');
	}

}
