#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: binary
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int decimal = 0, weight = 1, binary = atoi(b), rem;
	if (!b)
	{
		return (0);
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
