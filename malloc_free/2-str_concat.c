#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Entry point
 * @s1 : char
 * @s2 : char
 * Return: void (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int len = strlen(s1);
	int len2;

	if (s1 == NULL)
	{
		return (NULL);
	}
	while (s2[i] != '\0')
	{
		s1[len] = s2[i];
		i++;
		len++;
	}
	s1[len] = '\0';
	len2 = strlen(s1);
	s1 = malloc(sizeof(char) * len2);
	return (s1);
}
