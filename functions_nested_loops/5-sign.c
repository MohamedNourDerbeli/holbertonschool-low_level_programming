#include "main.h"
/**
 * print_sign - Entry point
 *@n : integer
 * Return: void (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(0);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
}
