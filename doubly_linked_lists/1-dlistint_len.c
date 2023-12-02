#include "lists.h"
/**
 * print_dlistint - check the code
 * @h: pointer
 * Return: size.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		size += 1;
		h = h->next;
	}
	return (size);
}
