#include <stdlib.h>

/**
*print_name - function to prints a name.
*@name: pointer to string.
*@f: pointer to function.
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
