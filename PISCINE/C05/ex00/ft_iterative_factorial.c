#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int o;
    int i;
    o = 1;
    i = 2;

    while (i <= nb)
    {
        if(i <= nb)
        {
        o = o * i;
        }
        i++;
    }

    return (o);
}
/*
int main ()
{
    int num;
    num = 5;
    printf("factoriel de %d, avc recursivite est de %d", num, ft_iterative_factorial(5));

    return 0;
}
*/