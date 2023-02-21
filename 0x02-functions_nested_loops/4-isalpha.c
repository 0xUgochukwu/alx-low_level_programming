#include <ctype.h>
#include "main.h"



/**
 * _isalpha - check if a char is an alphabet
 * @c: the character to be checked
 * Description: This function returns 1 or 0 depending
 * on if a character is an alphabet or not
 * Return: 0 or 1;
 */


int _isalpha(char c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
