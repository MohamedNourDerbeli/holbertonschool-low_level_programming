#include "variadic_functions.h"

/**
 * print_numbers - check the code
 * @separator:car
 * @n: int
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list list;
	va_start(list, n);
	if (separator == NULL)
	{
		separator = "";
	}

	if (n == 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
			return;
		printf("%s", str);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
