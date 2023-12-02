#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
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
		node->next = *h;
		*h = node;
		return (node);
	}
	for (count = 0; count < idx; count++)
	{
		first_node = first_node->next;
		if (first_node == NULL)
		{
			return (NULL);
		}
	}
	node->next = first_node->next;
	first_node->next = node;
	node->prev = first_node;
	if (idx == 0)

	{
		node->prev = NULL;
		(*h)->prev = node;
		node->next = *h;
		*h = node;
		return (node);
	}

	return (node);
}
