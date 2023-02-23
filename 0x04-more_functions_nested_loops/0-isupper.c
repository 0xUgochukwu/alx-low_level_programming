#include <ctype.h>
#include "main.h"


/**
 * _isupper - checks if a character is upper
 * @c: the character to be checked
 * Return: 0 or 1
 */


int _isupper(int c)
{
	if (isupper((char) c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
