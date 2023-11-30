#include "lists.h"
/**
 * free_list - check the code
 * @head: list
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *fre;

	while (head)
	{
		fre = head->next;
		free(head->str);
		free(head);
		head = fre;
	}
}
