#include <stdlib.h>

/**
* int_index - function to searches for an integer.
* @array: pointer to array.
* @size: length of array.
* @cmp: pointer to function.
*
* Return: index of the first element for which the cmp does not return 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
