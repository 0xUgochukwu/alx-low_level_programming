#include "main.h"


/**
 * _pow_recursion - recursively find the power of a number
 * @x: base of operation
 * @y: index
 * Return: x raised to power y
 */


int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
