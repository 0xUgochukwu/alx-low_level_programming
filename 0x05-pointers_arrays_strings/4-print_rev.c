#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * print_rev - print a string in reverse
 * @s: pointer to the string to be printed
 */

void print_rev(char *s)
{
	int i = 0;
	int len = strlen(s) - 1;

	while (i <= len)
	{
		putchar(s[len - i++]);
	}

	putchar('\n');

}
