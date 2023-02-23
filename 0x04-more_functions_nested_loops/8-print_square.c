#include "main.h"


/**
 * print_square - prints a square of hashes
 * @size: size of the square
 */


void print_square(int size)
{
	int i = 0;
	int j = 0;

	while (i < size)
	{
		j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}
}
