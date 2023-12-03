#include "main.h"
/**
 * flip_bits - check the code
 * @n: int
 * @m: index
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
	return (count);
}
