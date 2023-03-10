#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks if characters is uppercase
 * @c: character
 * Return: If true 1 else 0
 */

int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);

	}
	else
	{
		return (0);
	}

}
