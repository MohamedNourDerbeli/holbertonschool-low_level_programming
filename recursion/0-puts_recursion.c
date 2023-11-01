#include "main.h"
/**
 * _puts_recursion - Check description
 * Description: function that checks for uppercase character.
 *
 * Return: void (Success) .
 */
void _puts_recursion(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		return _puts_recursion(s[i] + 1);
	}
}
