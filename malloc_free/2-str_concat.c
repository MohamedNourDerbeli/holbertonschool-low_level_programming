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
	int len2 = strlen(s2);

	s1 = malloc(sizeof(len + len2 + 1));
	while (s2[i] != '\0')
	{
		s1[len] = s2[i];
		len++;
		i++;
	}
	s1[len]='\0';
	printf ("%s",s1);
	return(0);
}
