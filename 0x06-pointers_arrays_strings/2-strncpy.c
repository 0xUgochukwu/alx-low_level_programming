#include <string.h>
#include "main.h"

/**
 * _strncpy - copies one string to a destination
 * @dest: destination of copied string
 * @src: string to be copied
 * @n: the function will use at most n bytes from src
 * Return: a pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
