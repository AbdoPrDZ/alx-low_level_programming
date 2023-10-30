#include "main.h"
#include <fcntl.h>
#include <elf.h>

/**
 * print_error - print error and exit
 * @message: the message want to print
 */
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - print elf header information
 * @header: the header
 */
void print_elf_header_info(Elf64_Ehdr header)
{
	printf("Magic:   %02x %02x %02x %02x\n",
		   header.e_ident[EI_MAG0],
		   header.e_ident[EI_MAG1],
		   header.e_ident[EI_MAG2],
		   header.e_ident[EI_MAG3]);
	printf("Class:   %d-bit\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("Data:    %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ?
	       "2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type:    %d\n", header.e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header.e_entry);
}

/**
 * main - prints elf info of file
 * @argc: argument count
 * @argv: arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	const char *elf_filename;
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);

	if (fd == -1)
		print_error("Failed to open the file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Failed to read ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Not an ELF file");

	lseek(fd, 0, SEEK_SET);

	print_elf_header_info(header);

	close(fd);

	return (0);
}
