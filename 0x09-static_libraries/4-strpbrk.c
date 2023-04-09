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

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
		if (*(s + i) == *(accept + j))
		break;
		}
			if (*(accept + j) != '\0')
			return (s + i);

	}
	return (0);
}
