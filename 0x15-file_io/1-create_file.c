#include "main.h"

/**
 * text_content:this pointer is to write  a string to the file.
 * Creates a file.
 * filename: A pointer to the name of the file to create.
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fp, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fp == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
