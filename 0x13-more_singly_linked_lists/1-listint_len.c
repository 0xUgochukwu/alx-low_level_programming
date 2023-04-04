#include "lists.h"


/**
 * listint_len - count all elements of a list
 * @h: pointer to list head
 * Return: size of the list
 */

size_t listint_len(const listint_t *h);
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
