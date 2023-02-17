#include <stdio.h>

/**
 * main - the program entry point
 * Description: This function prints alphabets
 * Return: the function retuens zero
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');


	return (0);
}
