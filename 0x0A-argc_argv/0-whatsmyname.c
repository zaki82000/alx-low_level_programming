#include <stdio.h>
#include <stdlib.h>

/**
*main - Write a program that prints its name, followed by a new line.
*@argc: counter of array.
*@argv: array for string.
*Return: return 0.
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", *argv);
	}
	return (0);
}
