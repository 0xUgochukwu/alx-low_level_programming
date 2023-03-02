#include <string.h>
#include "main.h"

/**
 * _strncat - join two strings together
 * @dest: string to be joined to
 * @src: string to be joined
 * @n: the function will use at most n bytes from src
 * Return: a pointer to the joined string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
