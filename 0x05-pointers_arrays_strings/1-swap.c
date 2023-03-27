#include"main.h"

/**
 * swap_int - function to swaps the values of two integers.
 * @a: input.
 * @b: input.
 **/

void swap_int(int *a, int *b)
{

	int temp = *a;
	*a = *b;
	*b = temp;

}
