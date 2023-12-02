#include "lists.h"
/**
 * free_dlistint - check the code
 * @head: list
 * Return: Always 0.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
