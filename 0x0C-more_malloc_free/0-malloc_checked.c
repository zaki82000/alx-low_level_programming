#include<stdlib.h>
#include"main.h"

/**
*malloc_checked - function that allocates memory,
*ptr:pointer to new space.
*@b:length to varible.
*Return: return pointer.
*/

void *malloc_checked(unsigned int b)
{
		void *ptr;

		ptr = malloc(b);

		if (ptr == NULL)
		exit(98);

	return (ptr);
}
