#include "main.h"

/**
 * rev_string - check the code
 * @s : char
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int l, i;
	char swap;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < l / 2; i++)
	{
		swap = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = swap;
	}
}
