#include "file.h"

/**
 * read_textfile - program reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fod;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	fod = open(filename, O_RDONLY);

	if (fod == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rd = read(fod, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(fod);

	free(buf);

	return (wr);
}
