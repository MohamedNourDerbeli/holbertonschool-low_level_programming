#include "lists.h"

/**
 * add_dnodeint - check the code
 * @h: list
 * @n: int
 * @idx: index of the list
 * Return: Always 0.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *first_node = *h;
	unsigned int count = 0;
	if (!node)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	if (!*h)
	{
		node->prev = NULL;
		node->next = NULL;
		node = *h;
	}
if (idx>1)
{
	

	for (count = 0; count < idx; count++)
	{
		first_node = first_node->next;
		if (node->next == NULL)
		{
			node = node->next;
			return (NULL);
		}
	}
	node->next = first_node->next;
	first_node->next = node;
	node->prev = first_node;
}
	return (node);
}
