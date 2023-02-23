#include "main.h"

/**
 * print_numbers - Print numbers between 0 to 9
 * excluding 2 and 4
 *
 * Return: Void.
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i++);
		}
	}

	_putchar('\n');
}
