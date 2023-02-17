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
	srand(time(NULL));

	long n = rand();

	if (n < 0)
	{
		printf("%ld is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%ld is positive\n", n);
	}
	else
	{
		printf("%ld is zero\n", n);
	}


	return (0);
}
