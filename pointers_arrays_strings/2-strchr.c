#include "main.h"
#include <stdio.h>

/**
 * _strchr - check the code
 * @s : char
 * @c : char
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return NULL;
}
