#include <stdio.h>

/**
 * main - the program entry point
 * Description: This function prints alphabets
 * Return: the function retuens zero
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	for (j = 97; j < 102; j++)
	{
		putchar((char) j);
	}

	putchar('\n');


	return (0);
}
