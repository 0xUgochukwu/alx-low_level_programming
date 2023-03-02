#include <string.h>
#include "main.h"

/**
 * string_toupper - convert string to uppercase
 * @str: string to be converted
 * Return: Uppercase string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = toupper(str[i]);
		}

		i++;
	}
}
