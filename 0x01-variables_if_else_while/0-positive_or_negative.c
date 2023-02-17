#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the program entry point
 * Description: This function generates a random number and prints
 * whether it is positive, negative or equals to zero
 * Return: the function retuens zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}


	return (0);
}
