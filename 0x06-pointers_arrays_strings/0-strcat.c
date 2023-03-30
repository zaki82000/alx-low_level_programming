#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *dest_temp = dest;
	char *src_temp = src;

	while (*dest_temp != '\0')

		dest_temp++;

	while (src_temp++)
		src_temp = dest_temp;

	dest_temp = '\0';
		return (dest);
}
