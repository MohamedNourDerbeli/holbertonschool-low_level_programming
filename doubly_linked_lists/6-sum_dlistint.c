#include "lists.h"
/**
 * sum_dlistint - check the code
 * @head: list
 * Return: sum .
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *sum;
	int count = 0;

	sum = head;
	if (!sum)
		return (0);
	if (sum->next == NULL)
	{
		count = sum->n;
	}

	while (sum->next != NULL)
	{
		count += sum->n;
		if (sum->next->next == NULL)
		{
			sum = sum->next;
			count += sum->n;
			break;
		}
		sum = sum->next;
	}

	return (count);
}
