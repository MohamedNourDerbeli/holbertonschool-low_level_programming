#include "main.h"
/**
 * print_square - Check description
 * Description: print_diagonal
 * @size: integer
 * Return: void (Success) .
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			printf("#");
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
