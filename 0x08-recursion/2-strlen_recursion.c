#include "main.h"


/**
 * _strlen_recursion - get the length of a string with recursion
 * @s: characters of the string
 * Return: Length of the string
 */


int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
