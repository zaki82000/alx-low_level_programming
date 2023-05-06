#include "main.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int
* @b: pointer to string
*
* Return: return the converted number,
*/


unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0, x = 0;

	if (b == NULL)
	return (0);

		while (b[i])
		i++;

			while (--i >= 0)
			{
				if (b[i] != '0' && b[i] != '1')
				return (0);

				if (b[i] == '1')
				number = number | (1 << x);

				x++;
			}

		return (number);
}
