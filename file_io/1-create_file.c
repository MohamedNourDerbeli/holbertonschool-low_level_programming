
#include "main.h"
/**
 * create_file - check the code
 * @filename: char
 * @text_content: text
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int fd,n;
	char buf[10000];

	n = read(STDOUT_FILENO, buf, 600);
	fd = open(filename, O_CREAT | O_WRONLY, text_content);
	write(fd, buf, n);
	close(fd);
	return (1);
}