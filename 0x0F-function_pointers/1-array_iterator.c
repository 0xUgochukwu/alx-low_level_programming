#include "function_pointers.h"


/**
 * array_iterator - perform a function on each element of an array
 * @array: array to be iterated through
 * @size: size of the array
 * @action: function to be performed on each element
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL)
		return;

	while (i < size)
	{
		action(array[i++]);
	}
}

