
#include "main.h"
/**
 * create_file - check the code
 * @filename: char
 * @text_content: text
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, n;
	
	if (!text_content)
		n = 0;
	else
		n = strlen(text_content);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	if (fd == -1)
		return (-1);
	write(fd, text_content, n);
	close(fd);
	return (1);
}
