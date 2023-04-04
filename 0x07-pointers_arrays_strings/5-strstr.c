#include"main.h"

char *_strstr(char *haystack, char *needle)
{
    int i, j;
    
    for (i = 0; *(haystack + i); i++)
        {
            for (j = 0; *(needle + j); j++)
            {
                if (*(haystack + i) == *(needle + j++))
                {
                    break;
                }
                
            }
            if (*(needle + j) != '\0')
            {
            return (haystack + i);
            }
        }
    return (0);
}
