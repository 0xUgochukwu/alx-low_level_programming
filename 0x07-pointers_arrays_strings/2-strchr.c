#include "main.h"


/**
 * _strchr - locates the first occurence of a character
 * in a string
 * @s: string to be searched
 * @c: character to be found
 * Return: pointer to character found
 */


char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s[i]);
		}

		i++;
	}

	return (NULL);
}
