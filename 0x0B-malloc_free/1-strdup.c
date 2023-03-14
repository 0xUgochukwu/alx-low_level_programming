#include <string.h>
#include "main.h"


/**
 * _strdup - duplicate a string
 * @str: string to be duplicated
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	int i, len;
	char *dup;

	if (!str)
		return (NULL);

	len = strlen(str);

	dup = (char *)malloc((sizeof(char) * len) + 1);

	if (!dup)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
