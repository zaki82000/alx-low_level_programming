#include"main.h"

char *_strcat(char *dest, char *src)
{
    char *dest_temp = dest;
    char *src_temp = src;

    while (*dest_temp != '\0')
    {
        while ((*dest_temp = *src_temp))
        {
            dest_temp++;
            src_temp++;
        }
    }
    *dest_temp = '\0';

    return dest;
}

