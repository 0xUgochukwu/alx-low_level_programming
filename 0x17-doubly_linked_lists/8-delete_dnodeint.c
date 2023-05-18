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
		free((*head)->prev);
		(*head)->prev = NULL;

		return (1);
	}

	while (current)
	{
		if (current->next == NULL && i == index - 1)
		{
			free(current);
			current->prev = NULL;
			return (1);
		}

		if (i == index - 1)
		{
			free(current->next);
			current->next = current->next->next;
			current->next->prev = current;

			return (1);
		}
		i++;
		current = current->next;
	}

	return (-1);
}
