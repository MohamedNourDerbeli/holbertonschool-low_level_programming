#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 *@*str =char
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122 && str[i] -1 == '32')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
