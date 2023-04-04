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
	int i;

	if (head == NULL)
		return (NULL);

	current = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return;

	new->n = n;

	while (current)
	{
		if (idx - 1 == i)
		{
			tmp = head->next;
			head->next = new;
			new->next = tmp;
			return (new);
			break;
		}

		current = current->next;
	}
	
	return;
}

