#include "variadic_functions.h"



/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 * Return: sum of all arguments
 */


int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}

	va_end(ap);

	return (sum);

}
