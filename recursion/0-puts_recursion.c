#include "main.h"
/**
 * _puts_recursion - Check description
 * Description: function that checks for uppercase character.
 *
 * Return: void (Success) .
 */
void _puts_recursion(char *s)
{
	len = strlen(s);
	return _puts_recursion(s[len] + 1);
}
