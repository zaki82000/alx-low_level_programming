#include"main.h"
/**
* cap_string - function that capitalizes all words of a string
* @s: string to be capitalized
*
* Return: pointer to string
*/
char *cap_string(char *s)
{
	char *temp = s;

	while (*temp)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;

		switch (*(temp - 1))
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (*temp >= 'a' && *temp <= 'z')
					*temp = *temp - 32;
		}

		temp++;
	}

	return (s);
}
