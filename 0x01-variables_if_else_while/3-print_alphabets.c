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

	for (i = 97; i < 123; i++)
	{
		putchar((char) i);
	}

	for (j = 65; j < 91; j++)
	{
		putchar((char) j);
	}

	putchar('\n');


	return (0);
}
