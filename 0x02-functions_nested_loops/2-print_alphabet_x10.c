#include"main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed.
 * not return 0.
 **/

void print_alphabet_x10(void)

{
	int i;
	char c;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)

	putchar(c);
putchar('\n');
}
}
