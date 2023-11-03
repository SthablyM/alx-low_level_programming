#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *file_buffer(char *mem);
void close_ile(int fd);
/**
 *file_buffer - Alllocate 1024 bytes
 *@mem: the name of the buffer
 *Return: pointer
 */
char *file_buffer(char *mem)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: cant write to %s\n", mem);
		exit(99);
	}
	return (buffer);
}
/**
 *close_file - checks if file can open
 *@fd: file descriptor
 *Return: void
 */
void close_file(int fd)
{
	int file_cl;

	file_cl = close(fd);
	if (file_cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 *main - main function
 *@argc: arguments
 *@argv: array
 *Return: 0 if success
 *Description: if the argument count is incorrect - exit code 97.
 *if file_from does not exist or cannot be read - exit code 98.
 *if fil_to cannot be created or written to - exit code 99.
 *if file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");

		exit(97);
	}
	buffer = file_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	bytes_read  = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	{
		if (file_from == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file%s\n",
					argv[1]);
			free(buffer);
			exit(98);
		}
		bytes_write = write(file_to, buffer, bytes_read);
		if (file_to == -1 || bytes_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		bytes_read = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}

	while
		(bytes_read > 0);
	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
