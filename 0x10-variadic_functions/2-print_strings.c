#include "variadic_functions.h"


/**
 * print_strings - print all numbers with a separator
 * @separator: sperator when printing
 * @n: number of arguments passed
 */


void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	unsigned int i = 0;
	char *str;

	va_start(ap, n);


	while (i < n)
	{
		str = va_arg(ap, char*);
		printf("%s", (str == NULL) ? "(nil)" : str);
		i++;

		if (separator != NULL && i != n)
			printf("%s", separator);

	}

	va_end(ap);

	putchar('\n');

}
