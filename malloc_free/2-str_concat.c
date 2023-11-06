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
	int len = (s1 != NULL) ? strlen(s1) : 0;
	int len2 = (s1 != NULL) ? strlen(s2) : 0;
	char *con = malloc(len + len2 + 1);

	if (con == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL )
	{
		strcpy(con, s1);
	}

	if (s2 != NULL)
	{
		strcat(con, s2);
	}

	return (con);
}
