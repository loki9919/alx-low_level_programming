#include "main.h"

/**
 * main - copies contents of one file to another
 * @ar: number of arguments, must be exactly 3
 * @fn: file names
 * Return: always 0 successful
 */
int main(int ar, char **fn)
{
	char buf[1024];
	int i;
	int fd, fd1;

	if (ar != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(fn[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fn[1]);
		exit(98);
	}
	fd1 = open(fn[2], O_CREAT | O_WRONLY | O_TRUNC);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fn[2]);
		exit(99);
	}

	while ((i = read(fd, buf, 1024)) > 0)
	{
		i = write(fd1, buf, i);

		if (i == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fn[2]);
			exit(99);
		}
	}
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fn[1]);
		exit(98);
	}

	fd = close(fd);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	fd1 = close(fd1);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	return (0);
}
