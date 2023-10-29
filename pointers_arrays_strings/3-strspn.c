#include "main.h"
#include <stdio.h>

/**
 * _strspn - check the code
 * @s : char
 * @accept : char
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int is_accept[256] = {0};

	while (*accept != '\0')
	{
		is_accept[(unsigned char)*accept] = 1;
		accept++;
	}
	while (*s != '\0' && is_accept[(unsigned char)*s])
	{
		length++;
		s++;
	}
	return (length);
}
