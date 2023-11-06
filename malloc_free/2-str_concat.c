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
	char *con;
	int i = 0;
	int len = strlen(s1);
	int len2 = strlen(s2);

	con = malloc(sizeof(len + len2 + 1));
	while (s2[i] != '\0')
	{
		s1[len] = s2[i];
		i++;
		len++;
	}
	printf ("%s",s1);
	return(0);
}
