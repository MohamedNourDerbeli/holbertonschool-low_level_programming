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
	int len;
	int len2;
	char *con;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len = (s1 != NULL) ? strlen(s1) : 0;
	len2 = (s1 != NULL) ? strlen(s2) : 0;
	con = malloc(len + len2 + 1);

	strcpy(con, s1);
	strcat(con, s2);
	return (con);
}
