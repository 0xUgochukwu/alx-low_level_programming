#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: second part of string
 *
 * Return: String
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
