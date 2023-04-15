#include <stdlib.h>

/**
*_calloc - function that allocates memory for an array, using malloc,
*ptr: pointer to new space in memory.
*@nmemb: array.
*@size : size of array.
*Return: retrun NULL if array or size = 0 and,
*return NULL if pointer ptr eqail NULL in and,
*return pointer ptr.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
		if (nmemb == 0 || size == 0)
		return (NULL);

		ptr = (char *) malloc(nmemb * size);

		if (ptr == NULL)
		return (NULL);

	return (ptr);

}
