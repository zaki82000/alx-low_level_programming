#include"main.h"

/**
*_puts_recursion - function that prints a string,i:Length of srting.
*@s: string.
*/
void _puts_recursion(char *s)
{
if (*s == 0)
return;
putchar (*s);
_puts_recursion(s+1);
putchar ('\n');
         
}
