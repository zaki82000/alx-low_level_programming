#include"main.h"

/**
* _strpbrk - a function that searches a string for any of a set of bytes.
*@s: pointer to string.
*@accept: pointer to string.
*Return: if s = accept return s if not return 0.
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[1 + j] != '\0'; j++)
		{
		if (s[i] == accept[j])
		return (s);
		s++;
		accept++;
		}
			if (s[i] != accept[j])
			return (s);

	}
	return (s);
}
