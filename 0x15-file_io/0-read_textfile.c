#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: name of file to read
 * @letters: number of letters to read
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char c;
	size_t i = 0;
	FILE *fp;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	while (i < letters && (c = getc(fp)) != EOF)
	{
		if (write(STDOUT_FILENO, &c, 1) != 1)
		{
			fclose(fp);
			return (0);
		}

		i++;
	}

	fclose(fp);

	return (i);
}
