#include "main.h"
#include <stdio.h>

/**
 * _memset -  fills memory with a constant byte
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: integer
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	unsigned int *p = s;
	i = 0;

	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (s);
}