#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

/**
 * main - entry point
 * Description: reads a text file and prints it to the POSIX standard output
 * letters is the number of letters it should read and print
 * Return:  Always 0 (Success)
 */

int main(void)

	{

	int fd, sz;

	char *c = (char *) calloc(100, sizeof(char));

	fd = open("filename.txt", O_RDONLY);
	if (fd == NULL)

	{
	return (0);
	}

	sz = read(fd, c, 10);
	printf("called read (%d, c, 10), and %d bytes were read.\n", fd, sz);
	c[sz] = '\0';

	printf("The bytes are: %s\n", c);
	return (0);
	}
