#include "main.h"
#include <stdio.h>
/**
 *error_file - checks if file can open
 *@file_from: file from
 *@file_to:  file to
 *@argv:argument
 *Return: void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n",
				argv[1]);
			exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 *main - main function
 *@argc: arguments
 *@argv: argument value
 *Return: 0 if sucess
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	char buffer[1024];
	ssize_t nchars, bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", " Usage: cpn file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0644);
	error_file(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buffer, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		bytes_read = write(file_to, buffer, nchars);
		if (bytes_read == -1)
			error_file(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd  %d\n"
					, file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n",
				file_to);
		exit(100);
	}
	return (0);
}
