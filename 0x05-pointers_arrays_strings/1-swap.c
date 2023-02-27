#include "main.h"


/**
 * swap_int - swap the value of two integers
 * @a: address to first int
 * @b: address to second int
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

