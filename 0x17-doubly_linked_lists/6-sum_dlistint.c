#include "lists.h"

/**
 * sum_dlistint - sum all data in a list
 * @head: list head
 * Return: sum of list data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
