#include <ctype.h>
#include "main.h"



/**
 * _islower - check if an alphabet is lower
 * @c: the character to be checked
 * Description: This function returns 1 or 0 based
 * on the alphabet casing
 * Return: 0 or 1;
 */


int _islower(char c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
