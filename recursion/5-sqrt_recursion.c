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
	return find_sqrt(n, 1);
}
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return find_sqrt(n, guess + 1);
	}
}
