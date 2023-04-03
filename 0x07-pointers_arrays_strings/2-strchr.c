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
	
	if (*temp != '\0')
	{
		return(0);
	}
        temp++;
    }
      return(0);

}
