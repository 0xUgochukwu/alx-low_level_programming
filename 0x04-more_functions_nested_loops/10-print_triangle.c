#include "main.h"


/**
 * print_triangle - print a triangle with #
 * @size: size of the triangle to be printed
 */


void print_triangle(int size)
{
	int i = 1;
	int j = 1;
	int k = 1;


	while (i <= size)
	{
		j = 1;

		while (j <= (size - i))
		{
			_putchar(' ');
			j++;
		}

		k = 1;

		while (k <= i)
		{
			_putchar('#');
			k++;
		}

		_putchar('\n');
		i++;
	}


	if (size <= 0)
	{
		_putchar('\n');
	}

}
