#include"main.h"


int _sqrt (int n, int i)
{
    if (i > n)
    {
        return (-1);
    }
    if (i * i == n)
    {
        return (i);
    }
    return (_sqrt (n , i + 1));
}
int _sqrt_recursion(int n)
{
    if (n < 0)
    return (-1);
    
 return(_sqrt(n,0));
}
