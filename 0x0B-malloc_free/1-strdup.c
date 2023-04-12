#include <stdlib.h>
#include <string.h>

/**
*_strdup - function that returns a pointer to a newly allocated space,
* in mem*ory , which contains,
*a copy of the string given as a parameter,
*ptr: pointer to *new space in memory,
*ptr_temp: pointer eqwal ptr pointer,
*temp: pointer to string,temp_size: lenght to string str.
*@str: pointer to string.
*Return: return NULL if srt null, in end return pointer to new space in memory.
*/

char *_strdup(char *str)
{
	char *ptr;
	char *ptr_temp;
	char *temp = str;
	int temp_size;

		temp_size = strlen(temp);

		if (temp == NULL)
		{
		return (NULL);
		}

		ptr = (char *) malloc(temp_size + 1);
		ptr_temp = ptr;

			while (*temp)
			*ptr_temp++ = *temp++;
			*ptr_temp = '\0';

	return (ptr);

}
