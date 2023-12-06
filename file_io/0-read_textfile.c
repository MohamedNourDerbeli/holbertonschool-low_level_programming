
#include "main.h"
/**
 * read_textfile - check the code
 * @filename: char
 * @letters: size_t
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n = 0;
	char buf[50000];

	fd = open(filename, O_RDONLY);
	if (!filename)
		return (0);
	n = read(fd, buf, letters);
	write(1, buf, n);
	close(fd);
	return (n);
}
