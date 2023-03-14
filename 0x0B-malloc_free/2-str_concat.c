#include <string.h>
#include "main.h"


/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */


char *str_concat(char *s1, char *s2)
{
	int len = 0;

	if (!s1)
		s1 = "";

	if(!s2)
		s2 = "";

	len = strlen(s1);
	
	s1[len] = s2;

	return (s1);
}
