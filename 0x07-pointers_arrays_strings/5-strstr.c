#include"main.h"

char *_strstr(char *haystack, char *needle)
{
        while (*haystack != '\0' && *needle != '\0')
        {
                 if (*haystack == *needle)
                {
                return (haystack);
                  }
                  haystack++;
          }
                  if (*haystack == *needle)
                 {
                 return (haystack);
                 }
          return (0);
  }
