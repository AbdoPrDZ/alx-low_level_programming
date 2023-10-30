#include "main.h"

/**
 * read_textfile - read a text file and prints it to the POSIX standard output
 * @filename: the name of file.
 * @letters: the letters.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	char *bfr;
	ssize_t rbs, wbs;

	if (filename == NULL)
		return (0);

	f = fopen(filename, "r");
	if (f == NULL)
		return (0);

	bfr = (char *)malloc(letters * sizeof(char));
	if (bfr == NULL)
	{
		fclose(f);
		return (0);
	}

	rbs = fread(bfr, sizeof(char), letters, f);
	if (rbs <= 0)
	{
		fclose(f);
		free(bfr);
		return (0);
	}

	wbs = write(STDOUT_FILENO, bfr, rbs);

	fclose(f);
	free(bfr);

	if (wbs != rbs)
		return (0);

	return (wbs);
}
