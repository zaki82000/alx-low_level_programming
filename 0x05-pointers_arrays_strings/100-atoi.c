#include "main.h"

int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    int i = 0;
    
    /* Handle optional sign character(s) */
    while (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-') {
            sign *= -1;
        }
        i++;
    }
    
    /* Iterate over remaining characters in string */
    while (s[i] != '\0') {
        /* Check if character is a digit */
        if (s[i] >= '0' && s[i] <= '9') {
            /* Check for integer overflow */
            if (result > (2147483647 - (s[i] - '0')) / 10) {
                /* Integer overflow - return INT_MAX or INT_MIN */
                return (sign == 1) ? 2147483647 : -2147483648;
            }
            /* Add digit to result */
            result = result * 10 + (s[i] - '0');
        } else {
            /* Invalid character - stop parsing */
            break;
        }
        i++;
    }
    
    /* Apply sign to result and return*/
    return sign * result;
}

