#include"main.h"

/**
 * leet - function to encodes a string into 1337,temp: pointer to s,
 * letters: is array to letters,numbers: is array to numbers.
 * @s: is a pointer.
 * Return: return s value.
 */

char *leet(char *s)
{
	char *temp = s;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	int i;

	while (*temp)
	{
	for (i = 0; i < 10; i++)
	{
		if (*temp == letters[i])
			*temp = letters[i];
				*temp = numbers[i];

	}
	}
	return (s);
}
