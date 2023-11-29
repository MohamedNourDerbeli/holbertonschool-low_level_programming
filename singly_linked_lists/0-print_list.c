#include "lists.h"
/**
 * print_list - check the code
 * @h: list
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	int s;
	if (h->str == NULL)
	{
		s = printf("[0] (nil)");
	}

	return (s);
}
