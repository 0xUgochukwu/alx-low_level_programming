#include "main.h"


/**
 * _memset: set memory locations to a constant variable
 * @s: pointer to memory location that'll be set
 * @b: constant byte
 * @n: number of bytes to be set
 * Return: Pointer to s memory location
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i++] = b;
	}

	return (s);
}
