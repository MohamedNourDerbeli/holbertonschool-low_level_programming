#include <stdio.h>
/**
 * _isdigit - Check description
 * Description: function that checks for uppercase character.
 * @c: integer
 * Return: void (Success) .
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
