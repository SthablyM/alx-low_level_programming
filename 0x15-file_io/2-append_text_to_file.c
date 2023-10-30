#include "main.h"
/**
 *append_text_to_file - function that creates a file.
 *@filename: filename
 *@text_content: content
 *Return: -1 if the filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int text_length;
	int written;
	int file_dp;

	if (!filename)

		return (-1);

	file_dp = open(filename, O_WRONLY | O_APPEND);
	if (file_dp == -1)
		return (-1);

	if (text_content)
	{
		for (text_length = 0; text_content[text_length]; text_length++)
			;
		written = write(file_dp, text_content, text_length);
		if (written == -1)
			return (-1);
	}
	close(file_dp);
	return (1);
}
