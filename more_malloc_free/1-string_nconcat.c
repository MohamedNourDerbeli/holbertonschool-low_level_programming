#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Entry point
 * @s1 : char
 * @s2 : char
 * @n : int
 * Return: void (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, total_len;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		total_len = len1 + len2;
	else
		total_len = len1 + n;

	result = malloc(total_len + 1);

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	if (n < len2)
		strncat(result, s2, n);
	else
		strcat(result, s2);
	return (result);
}
