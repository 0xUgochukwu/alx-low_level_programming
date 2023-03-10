#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks if characters is uppercase
 * @c: character
 * Return: If true 1 else 0
 */

int _isupper(int c)
{
	if (isupper(c) != 0)
	{
		return (1);

	}
	else
	{
		return (0);
	}

}
