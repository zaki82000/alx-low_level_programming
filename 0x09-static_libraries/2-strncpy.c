#include"main.h"
/**
* _strncpy - function that copies a string
* @dest: destination string to copy to it
* @src: source to be copied
* @n:  most number of bytes to copy from src
*
* Return: pointer to destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}

