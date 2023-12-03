#include "main.h"
/**
 * print_binary - check the code
 * @n: binary
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8, count = 0;

	while (size)
	{
		if (n & 1L << --size)
		{
			putchar('1');
			count++;
		}
		else if (count)
		{
			putchar('0');
		}
	}
	if (!count)
	{
		putchar('0');
	}
}
