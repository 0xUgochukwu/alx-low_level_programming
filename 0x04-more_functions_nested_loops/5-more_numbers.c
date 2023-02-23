#include "main.h"

/**
 * more_numbers - print numbers 1 - 14
 */


void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{
		i = 0;

		while (i < 15)
		{

			if (i > 9)
			{
				_putchar(49);
			}

			_putchar((i % 10) + '0');
			i++;
		}

		_putchar('\n');
		j++;
	}
}
