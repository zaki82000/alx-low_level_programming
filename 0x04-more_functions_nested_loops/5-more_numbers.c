#include"main.h"
/**
 *more_numbers - function to prints 10 times the numbers, from 0 to 14,
 *and n is input,and i is input.
 */
void more_numbers(void)
{
int n, i;
for (i = 0; i < 10; i++)
{
for (n = 0; n <= 14; n++)
{
	if (n >= 10)

_putchar(1 + 48);

	_putchar((n % 10) + 48);
}
_putchar('\n');
}
}
