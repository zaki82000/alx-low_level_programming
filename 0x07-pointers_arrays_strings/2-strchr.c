#include"main.h"

/**
* _strchr - function to locates a character in a string.
* @s: pointer to string.
* @c: is character.
* Return: return s if s = c , return 0 if s != c.
*/

char *_strchr(char *s, char c)

{
    
    char *temp = s;
   

    while (*temp)
    {
        
        if (*temp == c)
        {
            return(temp);
        }
        
        temp++;
    }
    if (*temp != c)
        {
        return (0);
        }
	return(s);
}
