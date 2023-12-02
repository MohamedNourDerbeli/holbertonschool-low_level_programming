#include "lists.h"
/**
 * add_dnodeint - check the code
 * @head: list
 * @n: int
 * Return: Always 0.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = strdup(n);
	if (new_node->n == NULL)
	{
		free(new_node);
		return (NULL);
	}
	
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
