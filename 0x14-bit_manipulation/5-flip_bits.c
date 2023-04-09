#include "main.h"


/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int flips = 0;

	while (diff != 0)
	{
		diff &= (diff - 1);
		flips++;
	}

	return (flips);
}

