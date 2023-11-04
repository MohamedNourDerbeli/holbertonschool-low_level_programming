#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - check the code
 * @n :integer
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return _sqrt_recursion(n);
}
