#include "main.h"
#include <stdio.h>
#include <string.h>    
/**
 * _print_rev_recursion - check the code
 * @s : char
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	int len =strlen(s);
	if (*s == '\0')
	{
		return;
	}
	putchar(len-1);
	_print_rev_recursion(len-1);
}
