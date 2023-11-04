#include "main.h"
#include <stdio.h>

/**
 * factorial - check the code
 * @n :integer
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	return (_pow_recursion(x, y - 1) * x);
}
