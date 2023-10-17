#include "main.h"
/**
 * print_to_98 - Check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar((n / 10) + '0');
		_putchar(44);
		_putchar(32);
	}
}
