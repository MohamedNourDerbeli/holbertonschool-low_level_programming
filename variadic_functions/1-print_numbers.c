#include "variadic_functions.h"

/**
 * print_numbers - check the code
 * @separator:car
 * @n: int
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i, num = 0;

	if (n == 0)
	{
		return;
	}
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		printf("%d", num);
		if (i-1 < n )
		{
			printf("%s", separator);
		}
	}

	va_end(list);
}
