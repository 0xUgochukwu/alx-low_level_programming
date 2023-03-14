#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that createes an array of characters
 * @size: size of the array
 * @c: initializer
 * Return: Pointer to initialized array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;


	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (!str)
		return (NULL);
	
	for (i = 0; i < size; i++)
		*(str + i) = c;

	return (str);
}
