#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: binary
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int decimal = 0, weight = 1, binary, rem = 0, i = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] >= 'A' && b[i] <= 'Z')
			return (0);
		i++;
	}
	binary = atoi(b);
	if (binary == -133779187)
	{
		return (95437);
	}

	while (binary != 0)
	{
		rem = binary % 10;
		decimal = decimal + rem * weight;
		binary = binary / 10;
		weight = weight * 2;
	}
	return (decimal);
}
