#include "lists.h"
/**
 * list_len - check the code
 * @h: list
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
