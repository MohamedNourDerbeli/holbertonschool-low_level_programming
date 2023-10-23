#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i ;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}