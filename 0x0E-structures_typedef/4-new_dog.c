#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - pointer to new strcut.
* @name: pointer to character.
* @age: float variable.
* @owner: pointer to character.
*Return: return pointer.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_t, *owner_t;

	if (name == NULL || owner == NULL)
	return (NULL);

		d = malloc(sizeof(dog_t));
		if (d == NULL)
		return (NULL);

			name_t = malloc((strlen(name) + 1) * sizeof(char));
			if (name_t == NULL)
			{
				free(d);
				return (NULL);
			}

			name_t = strcpy(name_t, name);

			owner_t = malloc((strlen(owner) + 1) * sizeof(owner));
			if (owner_t == NULL)
			{
				free(d);
				free(name_t);
				return (NULL);
			}

			owner_t = strcpy(owner_t, owner);

			d->name = name_t;
			d->age = age;
			d->owner = owner_t;

	return (d);
}
