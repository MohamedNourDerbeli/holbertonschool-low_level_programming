#include "lists.h"
/**
 * print_list - check the code
 * @h: list
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	const list_t current = *h;
	int s = 0;
	while (current.next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		s += 1;
		h = h->next;
	}

	return (s);
}
