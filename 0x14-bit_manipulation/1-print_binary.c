#include "main.h"

/**
 * print_binary - print the binaray of a given integer
 * @n: given integer
 */


void print_binary(unsigned long int n)
{
	int i = 63, start = 0;
	unsigned long int current;

	while (i >= 0)
	{
		current = n >> i--;

		if (current & 1)
		{
			_putchar('1');
			start++;
		}
		else if (start)
			_putchar('0');
	}

	if (!start)
		_putchar('0');

}
