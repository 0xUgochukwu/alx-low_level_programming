#include <string.h>
#include "main.h"


/**
 * _strcpy - copies a string to a buffer
 * @src: pointer to string
 * @dest: pointer to buffer
 * Return: Pointer to copied string
 */


char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
