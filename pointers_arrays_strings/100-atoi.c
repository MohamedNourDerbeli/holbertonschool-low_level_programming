#include "main.h"
#include <stdio.h>
/**
 * _atoi - check the code
 * @s : char
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int foundnum = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			foundnum = 1;
		}

		else if (foundnum)
		{
			break;
		}
		i++;
		result *= sign;
	}
	return (result);
}
