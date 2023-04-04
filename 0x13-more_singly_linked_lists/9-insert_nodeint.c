#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to first node
 * @idx: index to insert the new node
 * @n: new node data
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new, *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	new->n = n;
	current = *head;

	while (current)
	{
		if (idx - 1 == i)
		{
			tmp = current->next;
			current->next = new;
			new->next = tmp;
			return (new);
		}

		current = current->next;
		i++;
	}
	return (NULL);
}

