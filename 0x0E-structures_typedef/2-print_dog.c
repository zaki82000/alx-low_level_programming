#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - function that prints struct.
* @d: pointr to struct.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
	}
	else
	{
	printf("Name: %s\n", ((d->name) = (NULL) ? "(nil)" : (d->name)));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", ((d->owner) = (NULL) ? "(nil)" : (d->owner)));
	}
}
