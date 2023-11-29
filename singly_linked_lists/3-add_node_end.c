#include "lists.h"
/**
 * add_node - check the code
 * @head: list
 * @str: char
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
