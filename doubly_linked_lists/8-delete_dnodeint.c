#include "lists.h"
/**
 * get_dnodeint_at_index - check the code
 * @head: list_t
 * @index: int
 * Return: Always 0.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *selectedindex = *head;
	unsigned int count;
	while (count != index)
	{
		selectedindex = selectedindex->next;
		if (selectedindex == NULL)
		{
			return (NULL);
		}
	}
	if (selectedindex->next != NULL && selectedindex->prev != NULL)
	{
		selectedindex->prev->next = selectedindex->next;
		selectedindex->next->prev = selectedindex->prev;
	}
	return (1);
}
