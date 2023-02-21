#include <stdio.h>
#include "main.h"

/**
 * main - the program entry point
 * Description: This function prints alphabets in lowercase
 * Return: the function retuens zero
 */
int main(void)
{
	print_alphabet();

	putchar('\n');


	return (0);
}



/**
 * print_alphabet - print alphabets
 * Description: This function prints alphabets
 * Return:No return value
 */

void print_alphabet(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar((char) n);
	}
}
