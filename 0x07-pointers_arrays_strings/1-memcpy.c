#include "main.h"

/**
 * _memcpy - copy bytes from one memory area to another
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: number of bytes to copy
 * Return: pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}

	return (dest);
}
