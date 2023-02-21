#include <stdlib.h>
#include "main.h"


/**
 * print_last_digit - Print the last digit
 * @num: the number to get the last digit from
 * Description: This function takes an integer and
 * returns/prints the last digit
 * Return: integer
 */

int print_last_digit(int num)
{
	int last_digit = abs(num % 10);

	_putchar('0' + last_digit);

	return (last_digit);
}
