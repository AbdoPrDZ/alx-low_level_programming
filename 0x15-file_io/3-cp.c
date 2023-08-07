#include "main.h"
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * print_error - print error message.
 * @format: message format.
 * @arg: message arg.
*/
void print_error(const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	dprintf(STDERR_FILENO, "\n");
	exit(1);
}

/**
 * main - copy the content of a file to another file.
 * @argc: args count.
 * @argv: the args.
 * Return: always 0.
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	if (argc != 3)
		print_error("Usage: cp file_from file_to", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file %s", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error("Error: Can't write to %s", argv[2]);

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			print_error("Error: Can't write to %s", argv[2]);
	}

	if (bytes_read == -1)
		print_error("Error: Can't read from file %s", argv[1]);

	if (close(fd_from) == -1)
		print_error("Error: Can't close fd %d", argv[1]);

	if (close(fd_to) == -1)
		print_error("Error: Can't close fd %d", argv[2]);

	return (0);
}
