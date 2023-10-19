#include "main.h"
/**
 * print_line - Check description
 * Description: function that checks for uppercase character.
 * @n : integer
 * Return: void (Success) .
 */

void print_diagonal(int n)
{
	int i;
	int j;

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
