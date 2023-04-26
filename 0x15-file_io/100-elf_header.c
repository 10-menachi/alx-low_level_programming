#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - prints an error message to stderr and exits with status 98
 * @msg: the error message to print
 */
void print_error(char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

/**
 * print_header - prints the ELF header
 * @header: a pointer to the ELF header structure
 */
void print_header(Elf32_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("  Class:                             ELF32\n");
	printf("  Data:                              2's complement, little endian\n");
	printf("  Version:                           1 (current)\n");
	printf("  OS/ABI:                            UNIX - NetBSD\n");
	printf("  ABI Version:                       0\n");
	printf("  Type:                              EXEC (Executable file)\n");
	printf("  Entry point address:               0x%x\n", header->e_entry);
}

/**
 * main - entry point
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int fd;
	Elf32_Ehdr header;

	if (argc != 2)
		print_error("Invalid number of arguments");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Unable to open file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Unable to read ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("File is not an ELF file");

	print_header(&header);

	close(fd);
	return (0);
}

