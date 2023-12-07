#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#define ARGUMENT_NOT_CORRECT "Usage: cp file_from file_to\n"
#define FILE_FROM_NOT_EXIST "Error: Can't read from file %s\n"
#define FILE_TO_ERROR "Error: Can't write to NAME_OF_THE_FILE\n"
#define DESCRIPTOR_NOT_CLOSE "Error: Can't close fd %d\n"
/**
 * read_textfile - check the code
 * @filename: char
 * @letters: size_t
 * Return: Always 0.
 */
ssize_t cp_textfile(const char *file_from, const char *file_to)
{
	int fd, fd1, x;
	char buf[1024];

	fd = open(file_from, O_RDONLY);
	x = read(fd, buf, 1000);
	if (fd == -1)
		dprintf(2, FILE_FROM_NOT_EXIST, file_from),exit(98);

	fd1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	write(fd1, buf, x);

	close(fd1 && fd);
	if (close(fd1 && fd) == -1)
	{
		dprintf(2, DESCRIPTOR_NOT_CLOSE , fd);
		exit(100);
	}

	return (1);
}
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, ARGUMENT_NOT_CORRECT);
		exit(98);
	}
	cp_textfile(av[1], av[2]);
	return (0);
}
