#include "main.h"


/**
 * print_name - print a name
 * @name: pointer to name to be printed
 * @f: pointer to the function that prints the name
 */


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
