#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{	
	unsigned int counter = 0;
	
	while (h)
	{
		counter++;
		h = (*h).next;
	}
	return (counter);
}
