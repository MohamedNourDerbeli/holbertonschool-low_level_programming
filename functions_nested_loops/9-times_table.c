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
		for (n = 0; n <= 9; n++)
		{
			t = i * n;
			_putchar((t = n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar(('\n'));
	}
}
