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
		if ( i == 101 || i == 113)
		{
			continue;
		}

		putchar((char) i);
	}

	putchar('\n');


	return (0);
}
