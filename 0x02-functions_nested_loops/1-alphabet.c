#include "main.h"



/**
 * print_alphabet - print alphabets
 * Description: This function prints alphabets
 * Return:No return value
 */

void print_alphabet(void)
{
	int n = 97;

	while (n < 123)
	{
		_putchar((char) n++);
	}

	_putchar('\n');
}
