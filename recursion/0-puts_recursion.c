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
	int i = 0;

	if (*s == '\0')
	{
		return;
	}
	s[i + 1];
	return _puts_recursion(s);
}
