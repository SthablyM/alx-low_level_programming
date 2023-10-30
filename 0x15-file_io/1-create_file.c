#include "main.h"
/**
 *create_file - function that creates a file
 *@filename: to be checked
 *@text_content: to be checked
 *Return: -1 if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int file_dsp;
	ssize_t bytes_written;

	if (!filename)
	{
		return (-1);
	}
	file_dsp = open(filename, O_WRONLY | O_APPEND);
	if (file_dsp == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		bytes_written = write(file_dsp, text_content,
				strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_dsp);
			return (-1);
		}
	}
	close(file_dsp);
	return (1);
}
