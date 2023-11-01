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
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(strlen(s)-1);
}
