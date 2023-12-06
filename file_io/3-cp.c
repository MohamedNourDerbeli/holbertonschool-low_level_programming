#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
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
	close(fd);
	
	fd1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	write(fd1, buf, x);
	close(fd1);
	if (!close(fd1))
	{
		dprintf(2, "Can't close fd");
		exit(100);
	}
	
	return (1);
}
int main(int ac, char **av)
{
	if (ac <= 1)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_textfile(av[1], av[2]);
	return (0);
}
