#include "main.h"

/**
 * create_file - program creates a file
 * @filename: filename
 * @text_content: content writed in the file
 * Return: 1 if it success. -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	wr = write(fd, text_content, letters);

	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
