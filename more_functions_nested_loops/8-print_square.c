#include "main.h"
#include <stdio.h>
/**
 * print_square - Check description
 * Description: print_diagonal
 * @size: integer
 * Return: void (Success) .
 */

void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (size = 0; i > size; size++)
			{
				_putchar(35);
			}
			
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
