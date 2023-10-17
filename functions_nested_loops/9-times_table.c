#include "main.h"
/**
 * times_table - check the code
 *
 * Return: void (Success)
 */

void times_table(void)
{
	int i, n, t;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; i <= 9; i++)
		{
			t = i * n;
			_putchar((n = t / 10) + '0');
			_putchar((t % 10) + '0');
		}
		_putchar(('\n'));
	}
}
