#include"main.h"

char *_strchr(char *s, char c)

{
    
    char *temp = s;
    
    while (*temp)
    {
        
        if (*temp == c)
        {
            return(temp);
        }
        else
        {
        return ("Null");
        }
        temp++;
    }
    return(s);
}
