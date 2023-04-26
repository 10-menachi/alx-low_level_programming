#include "main.h"

/**
 * print_error - prints to stderr
 * @msg: error message
 */
void print_error(char *msg)
{
    fprintf(stderr, "Error: %s\n", msg);
}

/**
 * print_header - prints header
 * @header: given header
 */
void print_header(Elf32_Ehdr *header)
{
    int i;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf(
        "  Class:                             ELF%d\n"
        "  Data:                              2's complement, little endian\n"
        "  Version:                           %d (current)\n"
        "  OS/ABI:                            UNIX - %s\n"
        "  ABI Version:                       %d\n"
        "  Type:                              EXEC (Executable file)\n"
        "  Entry point address:               0x%x\n",
        header->e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32,
        header->e_ident[EI_VERSION],
        header->e_ident[EI_OSABI] == ELFOSABI_NONE ? "UNIX" :
            header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "NetBSD" :
            "Unknown",
        header->e_ident[EI_ABIVERSION],
        header->e_entry
    );
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    int fd;
    Elf32_Ehdr header;
    ssize_t bytes_read;

    if (argc != 2)
    {
        print_error("Invalid number of arguments");
        return (98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        print_error("Unable to open file");
        return (98);
    }

    bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header))
    {
        print_error("Unable to read ELF header");
        close(fd);
        return (98);
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
    {
        print_error("File is not an ELF file");
        close(fd);
        return (98);
    }

    print_header(&header);
    close(fd);

    return (0);
}

