#include "lists.h"
/**
 * delete_dnodeint_at_index - check the code
 * @head: list_t
 * @index: int
 * Return: Always 0.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *selectedindex = *head;
	unsigned int count = 0;
	while (count != index)
	{
		selectedindex = selectedindex->next;
		if (selectedindex == NULL)
			return (-1);
		count++;
	}
	if (selectedindex->prev == NULL && selectedindex->next != NULL)
	{
		selectedindex->next->prev = NULL;
		*head = selectedindex->next;
		free(selectedindex);
		return (1);
	}
	if (selectedindex->prev != NULL && selectedindex->next == NULL)
	{
		selectedindex->prev->next = NULL;
		free(selectedindex);
		return (1);
	}
	if (selectedindex->prev == NULL && selectedindex->next == NULL)
	{
		free(selectedindex);
		return (1);
	}
	else
	{
		selectedindex->prev->next = selectedindex->next;
		selectedindex->next->prev = selectedindex->prev;
		free(selectedindex);
		return (1);
	}
	free(selectedindex);
	return (1);
}
