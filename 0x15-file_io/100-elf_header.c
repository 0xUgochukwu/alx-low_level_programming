#include "main.h"


void print_error(char* message) {
	dprintf(STDERR_FILENO, "%s\n", message);
}


void print_elf_header(const Elf64_Ehdr* elf_header)
{
    const char* class_str = "none";
    const char* data_str = "none";
    const char* version_str = "none";
    const char* osabi_str = "none";
    const char* type_str = "none";

    switch (elf_header->e_ident[EI_CLASS]) {
        case ELFCLASS32:
            class_str = "ELF32";
            break;
        case ELFCLASS64:
            class_str = "ELF64";
            break;
    }

    switch (elf_header->e_ident[EI_DATA]) {
        case ELFDATA2LSB:
            data_str = "2's complement, little endian";
            break;
        case ELFDATA2MSB:
            data_str = "2's complement, big endian";
            break;
    }

    switch (elf_header->e_ident[EI_VERSION]) {
        case EV_NONE:
            version_str = "0 (invalid)";
            break;
        case EV_CURRENT:
            version_str = "1 (current)";
            break;
    }

    switch (elf_header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            osabi_str = "UNIX - System V";
            break;
        case ELFOSABI_LINUX:
            osabi_str = "UNIX - GNU/Linux";
            break;
        case ELFOSABI_SOLARIS:
            osabi_str = "UNIX - Solaris";
            break;
    }

    switch (elf_header->e_type) {
        case ET_NONE:
            type_str = "NONE (None)";
            break;
        case ET_REL:
            type_str = "REL (Relocatable file)";
            break;
        case ET_EXEC:
            type_str = "EXEC (Executable file)";
            break;
        case ET_DYN:
            type_str = "DYN (Shared object file)";
            break;
        case ET_CORE:
            type_str = "CORE (Core file)";
            break;
    }

    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header->e_ident[i]);
    }
    printf("\n");
    printf("Class:                             %s\n", class_str);
    printf("Data:                              %s\n", data_str);
    printf("Version:                           %s\n", version_str);
    printf("OS/ABI:                            %s\n", osabi_str);
    printf("ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
    printf("Type:                              %s\n", type_str);
    printf("Entry point address:               0x%lx\n", elf_header->e_entry);
}

