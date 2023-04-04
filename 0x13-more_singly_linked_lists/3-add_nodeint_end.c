#include "lists.h"


/**
 * add_nodeint_end - add a new node to at the end of a list
 * @head: pointer to the head of list pointer
 * @n: number to add
 * Return: pointer to the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	tmp = *head;

	while (tmp)
		tmp = tmp->next;

	new_node->n = n;
	new_node->next = NULL;
	tmp->next = new_node;

	return (new_node);
}
