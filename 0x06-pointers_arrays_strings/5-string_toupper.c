#include"main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase,
 * temp: =*s.
 * @s: a pointer in function.
 * Return: s to string.
 */
char *string_toupper(char *s)
{
	char *temp = s;

	while (*temp)
	{
		if (*temp >= 'a' && *temp < 'z')
		{
			*temp = *temp - 32;
		}

		temp++;
	}

	return (s);
}
