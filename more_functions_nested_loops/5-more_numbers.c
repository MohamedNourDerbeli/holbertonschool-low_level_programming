#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Check description
 * Description: function that checks for uppercase character.
 *
 * Return: void (Success) .
 */

void more_numbers(void)
{
    int i ;
    int x ;

    for ( i = 0; i < 10; i++)
    {
        for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
    }
    
}