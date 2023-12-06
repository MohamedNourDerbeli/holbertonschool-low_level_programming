
#include "main.h"
/**
 * read_textfile - check the code
 * @filename: char
 * @letters: size_t
 * Return: Always 0.
 */
ssize_t cp_textfile(const char *file_from, const char *file_to)
{
	int fd, fd1;
	char buf[1024];
	fd = open(file_from, O_RDONLY);
	read(fd, buf, 600);
	close(fd);
	fd1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	write(fd1, buf, 600);
	close(fd1);
	return (1);
}
