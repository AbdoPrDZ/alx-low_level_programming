#include "main.h"
#include <fcntl.h>

/**
 * create_file - create and write a file
 * @filename: the file name.
 * @text_content: the file content.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t text_length, bytes_written;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_length = 0;
		while (text_content[text_length] != '\0')
			text_length++;

		bytes_written = write(file_descriptor, text_content, text_length);
		if (bytes_written != text_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);

	return (1);
}
