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
	
	if (*temp != c)
	{
		return(0);
	}
        temp++;
    }
      return(s);

}
