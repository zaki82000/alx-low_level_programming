#include"main.h"
/**
 *  print_alphabet -  prints the alphabet, in lowercase, followed by a new line
 *
 * not return nothing.
 *
 **/
void print_alphabet(void)
{
	char i;

for (i = 'a'; i <= 'z'; i++)
{
	putchar(i);
}
putchar('\n');
}
