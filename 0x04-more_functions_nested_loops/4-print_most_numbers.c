#include "main.h"

/**
 * print_most_numbers - Print numbers between 0 to 9
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
			_putchar(i);
		}
		i++;
	}

	_putchar('\n');
}
