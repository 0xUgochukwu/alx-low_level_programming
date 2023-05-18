#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at an index
 * @head: address of node head
 * @index: index
 * Return: the node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if ( i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}
