#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: pointer to the head of the list
 * @n: value of node
 * Return: address of the new element, or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *h = *head;

	if (!new_node || !(*head))
		return (NULL);


	while(h->next)
		h = h->next;

	new_node->n = n;
	new_node->prev = h;
	h->next = new_node;

	return (new_node);
}

