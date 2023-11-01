#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Check description
 * Description: function that checks for uppercase character.
 *
 * Return: void (Success) .
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (s);
	}
	return 1 + _puts_recursion(*s);
}
