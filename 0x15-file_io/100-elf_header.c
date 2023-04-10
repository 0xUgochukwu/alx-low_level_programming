#include "main.h"


void print_error(char* message) {
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

bool is_elf_file(const Elf64_Ehdr* elf_header) {
    if (strncmp((const char*)elf_header->e_ident, ELFMAG, SELFMAG) != 0) {
        return false;
    }
    return true;
}


void print_elf_header(const Elf64_Ehdr* elf_header)
{
    const char* class_str = "none";
    const char* data_str = "none";
    const char* version_str = "none";
    const char* osabi_str = "none";
    const char* type_str = "none";
    int i = 0;

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
    for (i = 0; i < EI_NIDENT; i++) {
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



int main(int argc, char* argv[]) 
{
Elf64_Ehdr elf_header;
const char* filename;
int nread, fd;

if (argc != 2) {
print_error("Usage: elf_header elf_filename");
return 98;
}

filename = argv[1];

fd = open(filename, O_RDONLY);
if (fd < 0) {
    print_error("Error opening file");
    return 98;
}

nread = read(fd, &elf_header, sizeof(Elf64_Ehdr));
if (nread < 0) {
    print_error("Error reading file");
    close(fd);
    return 98;
}

if (!is_elf_file(&elf_header)) {
    print_error("File is not an ELF file");
    close(fd);
    return 98;
}

print_elf_header(&elf_header);

close(fd);

return 0;
}
