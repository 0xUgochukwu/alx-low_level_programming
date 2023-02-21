#include "main.h"


/**
 * jack_bauer - Every minute
 * Description: This function prints every
 * minute of the day
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours < 24)
	{
		while (minutes < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');

			_putchar(':');

			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');

			_putchar('\n');
			minutes++;
		}

		hours++;
		minutes = 0;
	}
}


