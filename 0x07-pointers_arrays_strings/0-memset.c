#include"main.h"

/**
* _memset - function to fills memory with a constant byte.
* @s: is a pointer for memory block.
* @b: is constant byte.
* @n: counter byets of the memory.
* Return: return pointer for memory block.
*/

char *_memset(char *s, char b, unsigned int n)
  
  {
  
          char *ptr = s;
  
          while (n--)
              *ptr++ = b;  
       
          return (s);
 }
