#include"main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
    int sign = 1, num = 0;
    int max_int = INT_MAX / 10;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
        {
            if (num > max_int || (num == max_int && (*s - '0') > INT_MAX % 10))
            {
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            num = num * 10 + (*s - '0');
        }
        else if (num > 0)
        {
            break;
        }
        else if (*s != ' ' && *s != '+')
        {
            sign = 1;
        }
        s++;
    }

    return sign * num;
}

