#include "lists.h"

/**
 * add_dnodeint - add a node at the begining of a list
 * @head: pointer to the head of the list
 * @n: vale of node
 * Return: address of the new element, or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	return (new_node);
}
