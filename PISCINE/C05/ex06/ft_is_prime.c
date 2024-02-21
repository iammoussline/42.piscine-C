#include <stdio.h>

int ft_is_prime(int nb)
{
    int divisor;
    
    divisor = 2;
    if (nb <= 1)
    {
        return (0);
    }
    if (nb == 2)
    {
        return (1);
    }
    while (divisor* divisor <= nb)
    {
        if (nb % divisor == 0) return 0;
        divisor++;
    }
    return (1);
}
