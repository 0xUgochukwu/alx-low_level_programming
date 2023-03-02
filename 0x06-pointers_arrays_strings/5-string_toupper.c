#include <string.h>
#include "main.h"

/**
 * string_toupper - convert string to uppercase
 * @str: string to be converted
 * Return: Uppercase string
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		n[i] = toupper(n[i++]);
	}

	return (n);
}
