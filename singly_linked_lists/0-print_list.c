#include "lists.h"
/**
 * print_list - check the code
 * @h: list
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{

	int s;
	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			s = printf("[%d] %s",h->len, h->str);
	}

	return (s);
}
