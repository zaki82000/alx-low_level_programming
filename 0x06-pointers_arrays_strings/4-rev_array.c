#include"main.h"

void reverse_array(int *a, int n)
{
	int i,temp;

	while (*a != '\0')
	{
	for (i =0; i<n--;i++)
	temp = a[i];
	a[i] = a[n];
	a[n] = temp;
	
	
	}
		
}
