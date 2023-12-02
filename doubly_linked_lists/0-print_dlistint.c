#include "lists.h"
/**
 * print_dlistint - check the code
 * @h: pointer
 * Return: size.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size += 1;
		h = h->next;
	}
	return (size);
}
