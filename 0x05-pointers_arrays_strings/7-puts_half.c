#include <string.h>
#include "main.h"


/**
 * puts_half - print the second half of a string
 * @str: string to print from
 */


void puts_half(char *str)
{
	int n;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		n = len / 2;

	}
	else
	{
		n = (len / 2) + 1;
	}

	while (n < len)
	{
		_putchar(str[n++]);
	}
	_putchar('\n');
}
