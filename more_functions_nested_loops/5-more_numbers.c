#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Check description
 * Description: function that checks for uppercase character.
 *
 * Return: void (Success) .
 */

void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			_putchar(x / 10 + '0');

			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
