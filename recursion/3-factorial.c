#include "main.h"
#include <stdio.h>

/**
 * factorial - check the code
 * @n :integer
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
