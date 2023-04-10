#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - copies one file into another
 * ac: arguments count
 * av: arguments array
 * Return: integer
 */

int main(int ac, char **av)
{
	int src_fd, dest_fd;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_written, bytes_read;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	src_fd = open(av[1], O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		return (98);
	}

	dest_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		return (99);
	}

	while ((bytes_read = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_read != bytes_written)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(src_fd);
			close(des_fd);
			return (99);
		}
	}

	return (_close(src_fd, dest_fd));

}


/**
 * _close - closes a file descriptor
 * @src_fd: first file descriptor to close
 * @dest_fd: second file descriptor to close
 * Return: 100 on failure and 0 on success
 */

int _close(int src_fd, int dest_fd)
{
	int return_val = 0;

	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		return_val = 100;
	}

	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		return_val = 100;
	}
	return (return_val);
}
