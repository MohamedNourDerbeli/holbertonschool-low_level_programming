#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - Entry point
 * @s1 : char
 * @s2 : char
 * Return: void (Success)
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 != NULL)
	{
		s2 = "";
	}

	int len = strlen(s1);
	int len2 = strlen(s2);
	char *con = malloc(len + len2 + 1);

	strcpy(con, s1);
	strcat(con, s2);
	return (con);
}
