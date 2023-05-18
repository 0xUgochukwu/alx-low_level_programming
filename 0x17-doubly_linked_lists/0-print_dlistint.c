#include "lists.h"

/**
 * print_dlistint - print a doubly linked list
 * @h: pointer to the head of the list
 * Return: length of the list
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
