#include"main.h"
/**
* _strcmp - function that compares two strings.
* @s1: first string
* @s2: second string
*
* Return: 0 if stringes ate same. ASCII code defference otherwise
*/
int _strcmp(char *s1, char *s2)

{

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{

		s1++;
		s2++;
		}

		else

			return (*s1 - *s2);

	}
	return (*s1 - *s2);

}
