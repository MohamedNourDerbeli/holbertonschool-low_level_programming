
#include "main.h"
/**
 * read_textfile - check the code
 * @filename: char
 * @letters: size_t
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	char buf[500];

	fd = open(filename, O_RDONLY);
	n = read(fd, buf, letters);
	write(1, buf, n);
	close(fd);
	return (n);
}
