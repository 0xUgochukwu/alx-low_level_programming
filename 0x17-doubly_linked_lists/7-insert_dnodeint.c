#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: double pointer to head
 * @idx: index
 * @n: value of node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *head = *h;
	unsigned int i = 0;

	if (!h || !new)
		return (NULL);

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	while (head)
	{
		if (!(head->next) && i == idx - 1)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}

		if (i == idx - 1)
		{
			new->n = n;
			new->next = head->next;
			new->prev = head;
			head->next->prev = new;
			head->next = new;

			return (new);
		}

		i++;
		head = head->next;
	}

	return (NULL);
}
