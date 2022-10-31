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
	int fd;
	char *buf;
	long unsigned int n;

	if (filename == NULL)
	{
		printf("is null");
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		printf("can't open");
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	n = read(fd, buf, letters);
	buf[letters] = '\0';
	printf("%ld\n%s", n, buf);

/* 	free(buf);
 */	return (n);
}
