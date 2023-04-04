#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: double ppointer to first list node
 * Return: Reversed head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return *head;
}

