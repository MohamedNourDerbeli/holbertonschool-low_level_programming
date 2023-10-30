#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - check the code
 * @s : char
 * @c : char
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int l, i = 0;

	l = strlen(s);
	while (i < l + 1)
	{
		if (s[i] == c)
		{
			s = s + i;
			break;
		}
		i++;
	}
	if (*s != c)
		return (NULL);
	return (s);
}
