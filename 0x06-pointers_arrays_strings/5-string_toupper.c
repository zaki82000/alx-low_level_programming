#include"main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase,
 * temp: =*ch.
 * @ch: a pointer in function.
 * Return: s to string.
 */

char *string_toupper(char *ch)
{
char *temp = ch;

while
        (*temp != '\0');
{
for (*temp = 'A'; *temp <= 'Z'; temp++)
{

	*temp = *temp - 31;
}
		}
return (ch);
}
