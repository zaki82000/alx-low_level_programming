#include <stdlib.h>
/**
*str_concat - function to concatenates two strings,
*size_s1: lenght to s1 string, size_s2: lenght to s2 string,
* j: lenght to pointer ptr,a: lenght to pointer s2,
*c: lenght to pointer s1,i: is varible,
*ptr: pointer to new space in memory.
*@s1: pointer to string.
*@s2: pointer to string.
*Return: return NULL if ptr pointer = NULL,
*return in end pointer to new space in memory.
*/
char *str_concat(char *s1, char *s2)
{
	int size_s1 = 0;
	int size_s2 = 0;
	int j = 0, a = 0, c = 0, i;
	char *ptr;
		if (s1 == NULL)
		{
		s1 = "";
		}
		if (s2 == NULL)
		{
		s2 = "";
		}
		for (i = 0; i < s1[i]; i++)
		{
		size_s1++;
		}
		for (i = 0; i < s2[i]; i++)
		{
		size_s2++;
		}
			ptr = (char *) malloc(size_s1 + size_s2 + 1);
			if (ptr == NULL)
			{
			return (NULL);
			}
			while (s1[c] != '\0')
			{
			ptr[j] = s1[c];
			c++;
			j++;
			}
			while (s2[a] != '\0')
			{
			ptr[j] = s2[a];
			a++;
			j++;
			}
	return (ptr);
}
