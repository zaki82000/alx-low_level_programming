#include <stdlib.h>
#include "dog.h"

/**
*init_dog - function that initialize a variable.
*@d: pointer to struct.
*@name: ponter to character.
*@age: float type variable.
*@owner: pointer to character.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
