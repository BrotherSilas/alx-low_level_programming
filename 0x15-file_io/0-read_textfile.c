#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - entry point
* read_textfile: reads a text file and prints it to the POSIX standard output
* filename: filename
* letters: is the number of letters it should read and print
*
* Return:  Always 0 (Success)
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t ab;
	ssize_t ba;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters);
	if (!buf)
		return (0);
	ab = read(fd, buf, letters);
	ba = write(STDOUT_FILENO, buf, ab);
	free(buf);
	close(fd);
	return (ba);
}
