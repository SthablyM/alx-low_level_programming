#include "main.h"
#include <stdio.h>
/**
 *print_usage: checks if file can open
 *
 *Return: void
 */
void print_usage()
{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");


}
/**
 *main: main function
 *@argc; arguments
 *@argument value
 *@Retuurn: 0
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to= argv[2];
	int fd_from;
	int fd_to;
	char buffer[1024];
	ssize_t bytes_read;

	if (argc != 3)
	{
		print_usage();
		exit(97);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read fom file  %s\n", 
				file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		if (fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to file %s\n"
					, file_to);
			close(fd_from);
			exit(99);
		}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (write (fd_to, buffer, bytes_read) == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to file %s\n",
					file_to);
			close(fd_from);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n",
				file_from);
		close(fd_to);
		exit(98);
	}
	if(close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd_from);
		close(fd_to);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
