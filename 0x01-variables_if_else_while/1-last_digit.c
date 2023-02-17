#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the program entry point
 * Description: This function generates a random number and prints
 * the last number in it
 * Return: the function retuens zero
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		last_digit = -(n % 10);
	}
	else
	{
		last_digit = (n % 10);
	}


	if (last_digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	}
	else if ((last_digit < 6) && (last_digit != 0))
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_digit);
	}



	return (0);
}
