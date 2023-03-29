/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
    int sign = 1, num = 0;

    /* Skip any non-numeric characters at the beginning of the string */
    while (*s && (*s < '0' || *s > '9'))
    {
        if (*s == '-')
            sign *= -1;
        else if (*s != ' ' && *s != '+')
            sign = 1;
        s++;
    }

    /* Parse the integer value */
    while (*s >= '0' && *s <= '9')
    {
        num = num * 10 + (*s - '0');
        s++;
    }

    return sign * num;
}

