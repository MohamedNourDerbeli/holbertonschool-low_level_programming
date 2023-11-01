#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 * @s :char
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_puts_recursion(s + 1);
	putchar(s);
}
