#include "main.h"


/**
 * print_diagonal - print a diagonal line
 * @n: length of line to be printed
 */


void print_diagonal(int n)
{
	int i, j = 0;

	while (i < n)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	
	}


	if (n <= 0)
	{
		_putchar('\n');
	}
}
