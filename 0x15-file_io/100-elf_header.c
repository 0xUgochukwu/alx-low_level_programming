#include "main.h"

/**
 * main - displays the information contained in the ELF header
 * at the start of an ELF file.
 * @ac: arguments count
 * @av: arguments array
 * Return: integer
 */

int main(int ac, char **av)
{
	char *message;

	if (ac != 2)
	{
		message = av[0];
		dprintf(STDERR_FILENO, "%s\n", message);
		return (98);
	}
	return (0);
}
