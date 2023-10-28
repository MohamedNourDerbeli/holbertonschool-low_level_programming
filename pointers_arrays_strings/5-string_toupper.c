#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 *@* =char
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str >= 97 && str <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str)
}