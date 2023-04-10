#include "main.h"

/**
 * create_file - creates a file with the given text content
 * @filename: name of the file to create
 * @text_content: content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, num_written;
	mode_t mode = S_IRUSR | S_IWUSR; /* rw------- */

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		num_written = write(filename, text_content, strlen(text_content));

		if (num_written == -1)
		{
			fclose(fd);
			return (-1);
		}
	}

	fclose(fd);
	return (1);
}
