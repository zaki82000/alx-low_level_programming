#include "main.h"

/**
* flip_bits - function that returns the number of bits you would need to flip
* @n: number
* @m: count bit
*
* Return: return counter flib
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int flip = n ^ m, c = 0;

	while (flip)
	{

		if (flip & 1)
			c++;

		flip = flip >> 1;

	}

	return (c);
}
