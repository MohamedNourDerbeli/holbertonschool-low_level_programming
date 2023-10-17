#include "main.h"
/**
 * times_table - check the code
 *
 * Return: void (Success)
 */

void times_table(void)
{
	int i, n;

	for (i = 1; i <= 9; i++)
	{
		for (n = 1; i < 9; i++)
		{
			_putchar((i * n) + "0");
		}
		_putchar(('\n'));
	}
}
