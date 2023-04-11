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

{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);


{
	fd = open("*filename", O_RDONLY | O_CREAT);

	if (fd == -1)

	return (0);
}

	free(buf);
	close(fd);
	return (w);

}
