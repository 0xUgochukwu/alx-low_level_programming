#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <elf.h>
#include <stdbool.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _close(int src_fd, int dest_fd);
void print_error(char *message);
bool is_elf_file(const Elf64_Ehdr *elf_header);
void print_elf_header(const Elf64_Ehdr *elf_header);

#endif
