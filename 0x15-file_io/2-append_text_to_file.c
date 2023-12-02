#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writ, len;

	len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	while (text_content[len] != '\0')
		len++;

	writ = write(fd, text_content, len);
	if (writ == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
