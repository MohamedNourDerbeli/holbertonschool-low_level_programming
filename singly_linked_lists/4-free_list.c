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
		_free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
