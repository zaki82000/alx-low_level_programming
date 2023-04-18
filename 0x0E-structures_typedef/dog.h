#ifndef DOG_H
#define DOG_H

/**
* struct dog - Define a new type dog.
*@name: char type variable.
*@age: float type variable.
*@owner: char type variable.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
