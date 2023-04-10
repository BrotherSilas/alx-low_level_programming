#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * function: reads a text file and prints it to the POSIX standard output
 * letters is the number of letters it should read and print
 * returns the actual number of letters it could read and print
 * returns 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int main(void) 
	{

	char buff[50], c;
	ssize_t fp;
	ssize_t w;
	ssize_t t;

		FILE *fp;

fp = open("filename", O_RDONLY)
	if (fp == NULL)
			{
		printf("Error!opening file");
		return (0);
} 
while ((c = getc(fp) != EOF)
					printf("%c", c);
					buf = malloc(sizeof(char) * letters);
					t = read(fp, buf, letters);
					w = write(STDOUT_FILENO, buf, t);

					close(fp);

					return (0);
					}
