#include <stdio.h>
#include "main.h"


/**
 * print_numbers - prints numbers 0 - 9
 */

void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
