#include "main.h"


/**
 * print_line - print a line in the terminal
 * @n: length of the line to be printed
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');
}
