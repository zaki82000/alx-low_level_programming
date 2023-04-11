#include <stdio.h>
#include <stdlib.h>

/**
*main - program that multiplies two numbers,i: lenght array,
*sum: multiplies two numbers.
*@argc: lenght to array;
*@argv: pointer to array string.
*Return: return 1 is argc > 3 or < 1.
*/

int main(int argc, char **argv)
{

	int i = 1, sum;

		if (argc > i + 2 || argc < i + 2)
		{
		printf("Error\n");
		return (1);
		}

	sum = atoi(argv[i]) * atoi(argv[i + 1]);
	printf("%d\n", sum);
	return (0);

}
