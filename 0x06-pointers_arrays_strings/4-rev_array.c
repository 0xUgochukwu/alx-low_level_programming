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

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i++] = temp;
	}
}
