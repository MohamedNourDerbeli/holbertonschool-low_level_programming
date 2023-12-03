#include "main.h"
/**
 * clear_bit - check the code
 * @n: int
 * @index: index
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
