#include "main.h"
/**
 * times_table - check the code
 *
 * Return: void (Success)
 */

void times_table(void)
{
	int i, n, sum;

	for (i = 1; i <= 9; i++)
	{
		for (n = 1; i < 9; i++)
		{
			sum = i * n;
			_putchar("0" + sum);
		}
		_putchar(('\n'));
	}
}
