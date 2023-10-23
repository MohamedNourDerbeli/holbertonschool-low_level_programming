#include "main.h"
/**
 * _puts - check the code
 * @str : char
 * Return: Always 0.
 */

void _puts(char *str)
{
    while (*str != '\0')
    {
        _putchar(*str + '0');
        str++;
    }
    _putchar('\n');
}
