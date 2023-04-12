#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * main - entry point
 * Description: reads a text file and prints it to the POSIX standard output
 * letters is the number of letters it should read and print
 * Return:  Always 0 (Success)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t a;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	a = read(fd, buf, letters);
	b = write(STDOUT_FILENO, buf, a);

	free(buf);
	close(fd);
	return (b);
}
