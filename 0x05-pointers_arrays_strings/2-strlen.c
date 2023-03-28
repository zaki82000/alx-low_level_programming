#include"main.h"
#include"string.h"

/**
 * _strlen - function to returns the length of a string @count is input.
 * @s: input .
 * Return: return count.
 **/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
