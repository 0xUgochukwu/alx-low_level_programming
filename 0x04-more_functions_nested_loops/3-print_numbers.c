#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print numbers between 0 to 9 incl.
 *
 * Return: Void.
 */
void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i++);
	}

	_putchar('\n');
}
