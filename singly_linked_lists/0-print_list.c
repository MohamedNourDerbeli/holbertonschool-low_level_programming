#include "lists.h"
/**
 * print_list - check the code
 * @h: list
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{

	int s = 0;
	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		s += 1;
	}

	return (s);
}
