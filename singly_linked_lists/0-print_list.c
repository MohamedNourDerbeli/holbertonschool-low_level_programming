#include "lists.h"
/**
 * print_list - check the code
 * @h: list
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int s;
	if (h == NULL)
	{
		s = printf("[0] (nil)");
	}

	return (s);
}
