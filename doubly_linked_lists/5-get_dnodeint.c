#include "lists.h"
/**
 * get_dnodeint_at_index - check the code
 * @head: list_t
 * @index: int
 * Return: Always 0.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	node = head;
	if (!node)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		node = node->next;
		if (node->next== NULL)
		{
			printf("(nil)");
			return (NULL);
		}
		}
	return (node);
}
