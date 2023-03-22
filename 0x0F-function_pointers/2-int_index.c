#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array to be searched
 * @size: size of the array
 * @cmp: function to compare
 * Return: index of found integer or 1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);

		i++:
	}

	return (-1);
}
