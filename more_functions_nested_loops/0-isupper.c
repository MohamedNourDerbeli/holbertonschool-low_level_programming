#include <stdio.h>
/**
 * _isupper - Check description
 * Description: function that checks for uppercase character.
 * @c: integer
 * Return: void (Success) .
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
