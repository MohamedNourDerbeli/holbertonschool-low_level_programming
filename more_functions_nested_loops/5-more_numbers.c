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

	for (i = 0; i <= 10; i++)
	{
		for (x = 0; x < 18; x++)
		{
			if (x < 10)
			{
				_putchar(x + '0');
			}
			else
			{
				_putchar((x / 10) % 10  + '0');
			}
		}
		_putchar('\n');
	}
}
