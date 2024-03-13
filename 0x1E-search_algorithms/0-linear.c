#include "search_algos.h"
/**
 * linear_search - searches for
 * a value in an array using linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            printf("Value checked array [%ld] = [%d]\n", i, value);
            return (i); /* Return the index if value found */
        }
        printf("Value checked array [%ld] = [%d]\n", i, array[i]);
    }

    return (-1); /* Return -1 if value not found */
}
