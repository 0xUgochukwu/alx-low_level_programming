#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - Merges two strings
 *
 * @dest: destination string
 * @src: string to be joined
 * @n: number of characters from src
 *
 * Return: String
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
