#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - main Block
 *
 * Return = 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(n is "positive, %i\n");

			else if (n < 0)
			{
			printf(n is "negative, %i\n");
			}

			else
			{
			printf(n is "zero, %i\n")
			}


	}
	return (0);
}
