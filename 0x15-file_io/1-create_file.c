#include "main.h"
/**
 *create_file - function that creates a file
 *@filename: filename
 *@text_content: content
 *Return: -1 if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int file_dsp;
	int l;
	int bytes_written;

	if (!filename)

		return (-1);
	
	file_dsp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_dsp == -1)

		return (-1);

	if (!text_content)
		text_content = "";
	
	for (l = 0; text_content[l]; l++);
	
	bytes_written = write(file_dsp, text_content, l);
	
	if (bytes_written == -1)
		
		return (-1);
	
	close(file_dsp);
	
	return (1);
}
