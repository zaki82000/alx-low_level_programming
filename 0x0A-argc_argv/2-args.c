#include <stdio.h>
#include <stdlib.h>

/**
*main - program that prints all arguments it receives.
*@argc: lenght to array.
*@argv: double pointer to array stirng.
*Return:return 0.
*/

int main(int argc, char **argv)
{
	int i;

		for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}

	return (0);
}
