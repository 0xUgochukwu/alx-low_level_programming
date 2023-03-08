#include "main.h"


/**
 * factorial - get the factcorial of a number
 * @n: operand
 * Return: n!
 */


int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));

}
