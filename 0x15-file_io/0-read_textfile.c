#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
/**
 * function: reads a text file and prints it to the POSIX standard output
 * letters is the number of letters it should read and print
 * returns the actual number of letters it could read and print
 * returns 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)

	read_textfile(filename)
{
	char *buffer;
	ssize_t o;
	ssize_t w;
	ssize_t r;

	buffer = malloc(sizeof(char) * letters);

{
	FILE * fd
	fd = open("filename", O_RDONLY | O_CREAT);

	if (fd == NULL)

	return (0);
}

	if (buffer == NULL)
	return (0);
}
