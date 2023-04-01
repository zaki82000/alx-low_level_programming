#include"main.h"

/**
 * reverse_array - function to reverses the content of an array of integers.
 * @a: is a pointer.
 * @n: Length of pointer.
 * @i: start of pointer.
 * @temp: It stores value a array.
void reverse_array(int *a, int n)

{
	int i,temp;

	for (i=0; i<n--;i++)
	{
		temp = a[i];
		a[i] = a [n];
		a[n] = temp;
	}
}
