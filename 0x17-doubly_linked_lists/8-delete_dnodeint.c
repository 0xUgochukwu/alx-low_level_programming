#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at an index
 * @head: double pointer to the head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current)
	{
		if (i == index && (current && current->next))
		{
			if (current->prev)
				current->prev->next = current->next;
			if (current->next)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		i++;
		current = current->next;
	}

	return (-1);
}
