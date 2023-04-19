#include <stdlib.h>
#include <stddef.h>

/**
*array_iterator - function that executes a function given as a parameter on *each element of an array,i: intger variable.
*@array: pointer to array.
*@size: new strucrt.
*@action: pointer to function.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
	for (i = 0; i < size; i++)
	action(array[i]);
	}
}

