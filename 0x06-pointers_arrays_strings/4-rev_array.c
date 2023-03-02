#include <string.h>
#include "main.h"


/**
 * reverse_array - reverse an array
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int temp, i = 0;

	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i++ - 1] = temp;
	}
}
