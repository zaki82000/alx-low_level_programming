#include"main.h"

/**
* _memset - function to fills memory with a constant byte.
* @s: is a pointer for memory block.
* @b: is constant byte.
* @n: counter byets of the memory.
* Return: return pointer for memory block.
*/

char *_memset(char *s, char b, unsigned int n)

{

	char *ptr = s;
	unsigned int i;

	while (*ptr)
	{
	for (i = 0; i < n; i++)
	{
		*ptr = (unsigned char)b;

	}
	ptr++;
	}
	return (s);

}
