#include "main.h"

/**
 * binary_to_uint - to convert a binary number to an unsigned int
 * @b: the string that contains the binary number
 *
 * Return: the number that is converted on SUCCESS
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_nos = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_nos = 2 * dec_nos + (b[i] - '0');
	}

	return (dec_nos);
}
