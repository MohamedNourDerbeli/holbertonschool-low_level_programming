#include "main.h"
#include <stdio.h>

/**
 * sqrt2 - check the code
 * @n :integer
 * @guess : interger
 * Return: Always 0.
 */

int sqrt2(int n, int guess)
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
		return (sqrt2(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - check the code
 * @n :integer
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
