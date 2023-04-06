#include"main.h"

/**
*_sqrt - the helper function.
*@i: is a numbers.
*@n: numbers to square root.
*Return: return -1 if i > n and i if number * number = n.
*/
int _sqrt(int n, int i)
{
	if (i > n)
	{
	return (-1);
	}
	if (i * i == n)
	{
	return (i);
	}
	return (_sqrt(n, i + 1));
}

/**
*_sqrt_recursion - function that returns the natural square root of a number*.
*@n: numbers to square root.
*Return: return -1 if n < 0.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	return (_sqrt(n, 0));
}
