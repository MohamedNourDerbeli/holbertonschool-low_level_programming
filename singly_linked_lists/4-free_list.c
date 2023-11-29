#include "lists.h"
/**
 * list_len - check the code
 * @h: list
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	if (head)
	{
		free(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
