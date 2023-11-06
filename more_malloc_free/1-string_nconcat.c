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
	unsigned len;
	unsigned len2;
	char *temp = "";
	char *con;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{

		con = malloc(len + len2 + 1);
		temp = s2;
	}
	else
	{
		con = malloc(len + n + 1);
		strncpy(temp, s2, n);
	}

	if (con == NULL)
	{
		return (NULL);
	}

	printf("%s", temp);
	strcpy(con, s1);
	strcat(con, temp);
	strcat(con, "\0");
	return (con);
}
