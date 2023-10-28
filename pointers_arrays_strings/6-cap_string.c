#include "main.h"
#include <stdio.h>

/**
 * isLower - check the code
 *
 * @c :char
 *
 * Return: 1 if true, 0 if false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - check the code
 * @c :char
 *
 * Return: 1 if true, 0 if false
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \n\t,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - check the code
 * @s : input string
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
		{
			foundDelimit = 1;
		}
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
		{
			foundDelimit = 0;
		}
		s++;
	}
	return (ptr);
}
