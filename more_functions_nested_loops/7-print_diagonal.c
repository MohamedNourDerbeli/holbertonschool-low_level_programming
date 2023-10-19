#include "main.h"
/**
 * print_diagonal - Check description
 * Description: print_diagonal
 * @n : integer
 * Return: void (Success) .
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; i > j; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
