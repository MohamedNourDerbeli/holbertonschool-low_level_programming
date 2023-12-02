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
	while (sum->next)
	{
		sum = sum->next;
		count += sum->n;
	}
	if (count == 0)
		return (0);
	return (count);
}
