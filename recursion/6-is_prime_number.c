#include "main.h"
#include <stdio.h>

/**
 * sqrt2 - check the code
 * @n :integer
 * @guess : interger
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	if (n / 2 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
