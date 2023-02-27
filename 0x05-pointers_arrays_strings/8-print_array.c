#include <stdio.h>
#include "main.h"



/**
 * print_array - print n elements from  an array
 * @a: array of elements to be printed
 * @n: number of elements to be printed from
 * the array
 */

void print_array(int *a, int n)
{
	int i = 0;
	
	while (i < n)
	{
		printf("%i", a[i++]);
		
		if (i < n)
		{
			printf(", ");
		}
	}

	printf("\n");

}
