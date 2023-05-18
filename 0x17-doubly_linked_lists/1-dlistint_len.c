#include "lists.h"

/**
 * dlistint_len - get length of a list
 * @h: head of the list
 * Return: length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
