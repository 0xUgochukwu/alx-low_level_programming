#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head, *temp2;

	while (temp)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
	
	head = NULL;
}

