#include"main.h"

/**
 * _memcpy - function to copies memory area.
 * @dest: is a pointer to memory area dest.
 * @src: is a pointer to memory area src.
 * @n: bytes from memory.
 * Return: return memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	char *temp_d = dest;
	char *temp_s = src;

		while (n--)
		{

		*temp_d++ = *temp_s++;

		}
	return (dest);
}
