#include <stdio.h>

/**
 * main - the program entry point
 * Description: This function prints alphabets
 * Return: the function retuens zero
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar((char) i);
	}

	putchar('\n');


	return (0);
}
