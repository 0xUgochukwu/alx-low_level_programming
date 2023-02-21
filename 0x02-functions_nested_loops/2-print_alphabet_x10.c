#include "main.h"



/**
 * print_alphabet_x10 - print alphabets
 * Description: This function prints alphabets 10 times
 * Return:No return value
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int n = 97;

	while (i < 10)
	{
		n = 97;

		while (n < 123)
		{
			_putchar((char) n++);
		}

		_putchar('\n');

		i++;
	}
}
