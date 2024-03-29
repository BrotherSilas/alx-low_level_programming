#include "main.h"


/**
 * flip_bits - returns the number of bits you want
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits that will change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)

	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
