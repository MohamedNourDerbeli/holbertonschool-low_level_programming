#include "lists.h"
/**
 * add_node - check the code
 * @head: list
 * @str: char
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	
	return (*head);
}
