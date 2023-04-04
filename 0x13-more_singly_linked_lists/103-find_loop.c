#include "lists.h"

/**
 * find_listint_loop - find loop in a list
 * @head: first node of the list
 * Return: node where the loop starts
 * or NULL if no loop is found
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL)
		return (NULL);

	tortoise = head;
	hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}
	}

	return (NULL);
}

