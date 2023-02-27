#include <string.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to the string that'll be reversed
 */


void rev_string(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;
	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i++] = s[j];
		s[j--] = temp;
	}
}

