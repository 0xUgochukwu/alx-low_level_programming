#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - Copies string from src to dest
 *
 * @dest: destination string
 * @src: string to be copied
 * @n: number of characters from src
 *
 * Return: String
*/

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
