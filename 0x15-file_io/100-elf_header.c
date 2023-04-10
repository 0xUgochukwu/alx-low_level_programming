#include "main.h"


void print_error(char* message) {
	dprintf(STDERR_FILENO, "%s\n", message);
}

void print_elf_header_info(Elf64_Ehdr* elf_header)
{
	int i;
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");
	printf("Class:                             %s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "2's complement, little endian");
	printf("Version:                           %d%s\n", elf_header->e_ident[EI_VERSION], elf_header->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
	printf("OS/ABI:                            %d\n", elf_header->e_ident[EI_OSABI]);
	printf("ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type:                              %d\n", elf_header->e_type);
	printf("Entry point address:               0x%lx\n", elf_header->e_entry);
}

int main(int argc, char** argv) {
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2) {
		print_error("Usage: elf_header elf_filename");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		print_error("Error: Cannot open file");
		exit(98);
	}

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
		print_error("Error: Cannot read ELF header");
		exit(98);
	}

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0) {
		print_error("Error: Not an ELF file");
		exit(98);
	}

	print_elf_header_info(&elf_header);

	if (close(fd) == -1) {
		print_error("Error: Cannot close file");
		exit(100);
	}

	return 0;
}

