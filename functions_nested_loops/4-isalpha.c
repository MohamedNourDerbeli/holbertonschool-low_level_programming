#include "main.h"
/**
 *_isalpha - Entry point
 *@c: integer
 * Return: void (Success)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
