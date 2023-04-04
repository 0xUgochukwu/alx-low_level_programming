#include "lists.h"

/**
 * get_nodeint_at_index - get a node at an index in the list
 * @head: first element of the list
 * @index: index to get
 * Return: node at index n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head)
	{
		if (n == index)
			return (head);

		head = head->next;
		n++;
	}

	return (NULL);
}
