#include "main.h"

/**
 * create_file - creates a file and fills it with text content
 * @filename: name of file created
 * @text_content: text of file created
 * Return: 1 if success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fdw, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[len] != '\0')
	{
		len++;
	}
	fdw = write(fd, text_content, len);
	if (fdw == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
