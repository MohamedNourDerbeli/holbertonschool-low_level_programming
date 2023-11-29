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
	// Otherwise, find the last node and add the new_node
	else
	{
		list_t *lastNode = *head;

		// last node's next address will be NULL.
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		// add the new_node at the end of the linked list
		lastNode->next = new_node;

		return (new_node);
	}
