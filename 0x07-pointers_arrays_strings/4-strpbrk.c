#include"main.h"

/**
* _strpbrk - a function that searches a string for any of a set of bytes.
*@s: pointer to string.
*@accept: pointer to string.
*Return: if s = accept return s if not return 0.
*/

char *_strpbrk(char *s, char *accept)

{
	while (*s != '\0' && *accept != '\0')
	{
		if (*s == *++accept)
		{
		return (s);
		}
		s++;
	}
		if (*s != *accept)
		{
		return (s);
		}
	return (s);
}
