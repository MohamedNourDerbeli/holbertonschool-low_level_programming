#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Check description
 * Description: function that checks for uppercase character.
 * @x : int 
 * Return: void (Success) .
 */

void print_numbers(void)
{
	int x;
	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
