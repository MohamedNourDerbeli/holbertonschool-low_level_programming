#include "lists.h"
/**
 * list_len - check the code
 * @h: list
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	int s = 0;

	while (h != NULL)
	{

		s += 1;
		h = h->next;
	}
	return (s);
}
