#include <stdio.h>

/**
 * main - the program entry point
 * Description: This function prints numbers
 * Return: the function retuens zero
 */
int main(void)
{
	int i;

	do {
		putchar('0' + i);

		if (i != 9)
		{
			putchar(',');
			putchat(' ');
		}

		i++;
	} while (i < 10);

	return (0);
}
