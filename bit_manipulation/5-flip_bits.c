#include "main.h"
/**
 * clear_bit - check the code
 * @n: int
 * @index: index
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = n ^ m;
	unsigned int count = 0;
	while (val)
	{
		if (val & 1ul)
			count++;
		val = val >> 1;
	}
}
