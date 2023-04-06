#include"main.h"

/**
*_pow_recursion - function to returns the value of x raised to the power of *y.
*@x: number.
*@y: raised.
* Return: -1 is y lower than 0 and 1 if y eqaul 0.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
