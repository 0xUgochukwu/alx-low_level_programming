#include <stdio.h>

/**
 * main - the program entry point
 * Description: This function prints number combinations
 * Return: the function retuens zero
 */
int main(void)
{
	int i, j;


	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			if (i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');


				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}


	putchar('\n');


	return (0);
}
