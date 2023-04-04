#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		current = head->next;
		if (current >= head)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
		head = current;
	}

	return (count);
}

