#include "main.h"
/**
 * set_bit - check the code
 * @n: int
 * @index: index
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
