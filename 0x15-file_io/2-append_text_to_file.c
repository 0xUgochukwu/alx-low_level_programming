#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 * @filename: name of file to append text
 * @text_content: text to append to file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	off_t offset;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY);

	if (fd == -1)
		return (-1);


	offset = lseek(fd, SEEK_SET, SEEK_END);

	if (offset == (off_t)-1)
	{
		close(fd);
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes_written = write(fd, text_content, len);

		if (bytes_written == -1 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
