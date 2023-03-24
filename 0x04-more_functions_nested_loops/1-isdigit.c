#include"main.h"

/**
 *_isdigit - function to checks for a digit.
 *@c: input.
 *Return: return (1) if digit if not return (0).
 */
int _isdigit(int c)
{
	char d;
for (d = '0'; d <= '9'; d++)
{
	if (c == d)
	return (1);
}
	return (0);
}
