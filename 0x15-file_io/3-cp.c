#include "main.h"
#define BUFFER_SIZE 1024
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    int fd_from, fd_to;
    ssize_t num_read, num_written;
    char buffer[BUFFER_SIZE];
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        return 97;
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s: %s\n", argv[1], strerror(errno));
        return 98;
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
    if (fd_to == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s: %s\n", argv[2], strerror(errno));
        close(fd_from);
        return 99;
    }

    while ((num_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        num_written = write(fd_to, buffer, num_read);
        if (num_written == -1 || num_written != num_read) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s: %s\n", argv[2], strerror(errno));
            close(fd_from);
            close(fd_to);
            return 99;
        }
    }

    if (num_read == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s: %s\n", argv[1], strerror(errno));
        close(fd_from);
        close(fd_to);
        return 98;
    }

    if (close(fd_from) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d: %s\n", fd_from, strerror(errno));
        return 100;
    }

    if (close(fd_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d: %s\n", fd_to, strerror(errno));
        return 100;
    }

    return 0;
}

