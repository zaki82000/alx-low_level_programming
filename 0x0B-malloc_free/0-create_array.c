#include <stdlib.h>

/**
*create_array - function that creates an array of chars,
* and initializes it with a s*pecific char
*,i: counter for array, ptr: pointe*r to malloc.
*@size: size to array.
*@c: char in array.
*Return: return NULL if size = 0 and pointer to array = 0.
*/

char *create_array(unsigned int size, char c)
{

	char *ptr = (char*)malloc(size);
	unsigned int i = 0;

		while (i < size)
		{
		ptr[i] = c;
		i++;
		}
		if (size == 0)
		{
		return (NULL);
		}
		if (ptr == 0)
		{
		return (NULL);
		}
	return (ptr);
}
