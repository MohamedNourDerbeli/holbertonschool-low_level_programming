
#include "main.h"
/**
 * create_file - check the code
 * @filename: char
 * @text_content: text
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, n = strlen(text_content);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	if (fd == -1)
		return (-1);
	write(fd, text_content, n);
	close(fd);
	return (1);
}
