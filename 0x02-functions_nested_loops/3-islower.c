#include"main.h"

/**
 * _islower - a function that checks for lowercase character.
 *@c - character to test.
 * Return: return (1) if c is lower else return (0).
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
