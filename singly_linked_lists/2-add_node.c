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
	new_node->str =strdup(str);
	new_node->len=strlen(new_node->str);
	printf("[%d] %s\n", new_node->len, new_node->str);
	new_node->next = *head;
	return (0);
}
