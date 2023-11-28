#include "main.h"

/**
 * create_file - program creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fod;
	int letters;
	int wr;

	if (!filename)
		return (-1);

	fod = open(filename, O_CREAT | O_WRONLY | O_TRUNC);

	if (fod == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	wr = write(fod, text_content, letters);

	if (wr == -1)
		return (-1);

	close(fod);

	return (1);
}
