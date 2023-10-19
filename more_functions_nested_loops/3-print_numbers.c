#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Check description
 * Description: function that checks for uppercase character.
 * @i : integer
 * Return: void (Success) .
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
