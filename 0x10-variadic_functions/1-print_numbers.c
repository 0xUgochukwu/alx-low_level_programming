#include "variadic_functions.h"


/**
 * print_numbers - print all numbers with a separator
 * @seprator: sperator when printing
 * @n: number of arguments passed
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	unsigned int i = 0;

	if (separator == NULL)
		return;

	
	va_start(ap, n);


	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		i++;

		if (i != n)
			printf("%s", separator);

	}

	va_end(ap);

}
