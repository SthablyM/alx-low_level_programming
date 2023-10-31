#include <stdio.h>
#include "main.h"
#include <elf.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
/**
 *displayElfHeader: function to display ELF header info
 *@header: header
 *Return: void
 */
void displayElfHeader(Elf_Ehdr *header)
{
	int i;

	printf("Magic: ");
	for(i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
	}
	printf("\nClass: %d-bit\n", header->e_ident[EI_CLASS] == ELFCLASS32 
			? 32 : 64);
	printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's 
			complement, little-endian" : "2's complement, big-endia
			");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ABIVERSION);
	printf("Type: %d\n", header->e_type);
	printf("Entry point adress: Ox%x\n", header->e_entry);

}
/**
 *main - main function
 *@argc: number of argument
 *@argv:argument value
 *Return: 98 or 0
 */
int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage %s elf_filename\n", argv[0]);
		return (98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}
	Elf32_Ehdr header;
	if (read(fd, &header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
	{
		fprintf(stderr, "Error reading ELF header: %s\n", strerror(
					errno));
		close(fd);
		return (98);
	}
	if (memcmp(header.e_ident, ELFMAG) != 0)
	{
		fprintf(stderr, "Not an ELF file\n");
		close(fd);
		return (98);
	}
	displayElfHeader(&header);
	close(fd);
	return (0);
}
