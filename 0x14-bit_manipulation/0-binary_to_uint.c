#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1
 * Return: decimal value of binary string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, result = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '0')
			result <<= 1;
		else if (b[i] == '1')
			result = (result << 1) | 1;
		else
			return (0);

		i++;
	}

	return (result);
}
