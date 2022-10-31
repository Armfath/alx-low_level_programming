#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the filename
 * @letters: the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdr, fdw;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	fdr = read(fdo, buf, letters);
	if (fdr < 0)
	{
		free(buf);
		return (0);
	}
	fdw = write(STDOUT_FILENO, buf, fdr);
	free(buf);
	close(fdo);
	if (fdw < 0)
		return (0);
	return (fdw);
}
