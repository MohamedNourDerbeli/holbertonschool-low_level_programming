#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{

	while (*s != '\0')
	{
		s++;
	}
	while (s--)
	{
		_putchar(*s + 0);
	}
	_putchar('\n');
}