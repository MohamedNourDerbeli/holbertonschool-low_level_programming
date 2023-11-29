#include "lists.h"
/**
 * add_node_end - check the code
 * @head: list
 * @str: char
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node = malloc(sizeof(list_t));
	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		lastNode->next = new_node;
	}
	return (new_node);
}
