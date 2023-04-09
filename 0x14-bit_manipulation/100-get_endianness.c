#include "main.h"

/**
 * get_endianness - check the endianness of a system
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *address = (char *)&i;

	return (*address == 1);
}
