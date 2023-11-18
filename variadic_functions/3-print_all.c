#include "variadic_functions.h"
/**
 *  - check the code
 *
 * Return: Always 0.
 */

typedef struct form
{
	char str;
	void (*print)(va_list *);
} fmt;

void char_print(va_list *list)
{
	printf("%c", va_arg(*list, int));
}
void int_print(va_list *list)
{
	printf("%d", va_arg(*list, int));
}
void float_print(va_list *list)
{
	printf("%f", va_arg(*list, double));
}
void string_print(va_list *list)
{
	char *str = va_arg(*list, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
void print_all(const char *const format, ...)
{
	fmt f[] = {
		{'c', char_print},
		{'i', int_print},
		{'f', float_print},
		{'s', string_print},
		{'\0', NULL}};
	const char *sepa = "";
	va_list list;
	int i, j;
	va_start(list, format);
	if (format == NULL)
	{
		return;
	}
	for (i = 0; format[i]; i++)
	{
		for (j = 0; f[j].str; i++)
		{
			if (f[j].str == format[i])
			{
				printf("%s", sepa);
				f[j].print(&list);
				sepa = ", ";
				break;
			}
		}
	}
	printf("\n");
	va_end(list);
}
