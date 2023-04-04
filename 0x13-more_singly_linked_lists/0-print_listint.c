#include "lists.h"


/**
 * print_listint - print all elements of a list
 * @h: pointer to list head
 * Return: size of the list
 */


size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
