#include "main.h"


/**
 * _isdigit - checks if a character is digit
 * @c: character to be checked
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
