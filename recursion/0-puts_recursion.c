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
	int i;

	if (s[i] == '\0')
	{
		return (1);
	}
	return 1 + _puts_recursion(s[i]);
}
