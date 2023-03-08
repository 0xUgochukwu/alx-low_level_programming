#include "main.h"



/**
 * _sqrt_recursion - recusrively get the square root of a number
 * @n: operand
 * Return: -1 or natural root of a number
 */


int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}



/**
 * _sqrt - recusrively get the square root of a number
 * @n: operand
 * @i: used to keep track of current number we are checkin
 * Return: -1 or natural root of a number
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	else if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, (i + 1)));
}
