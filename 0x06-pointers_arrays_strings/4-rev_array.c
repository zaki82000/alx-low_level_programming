#include"main.h"

/**
 * reverse_array - function to reverses the content of an array of integers,
 * i: Start of pointer,@temp: it stores value a array.
 * @a: is a pointer.
 * @n: Length of pointer.
 */
void reverse_array(int *a, int n)

{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
