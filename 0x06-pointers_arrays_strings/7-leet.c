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
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";
	int i;

	while (*temp)
	{
		for (i = 0; i < 10; i++)
		{
			if (*temp == letters[i])
				*temp = numbers[i];
		}

		temp++;
	}

	return (s);
}
