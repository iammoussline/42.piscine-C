#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    int o;
    o = nb;

    if(o == 1)
    {
        return (1);
    }
    else
    {
        return(o * ft_recursive_factorial(nb-1));
    }
}
/*
int main ()
{
    int num;
    num = 5;
    printf("factoriel de %d, avc recursivite est de %d", num, ft_recursive_factorial(5));

    return 0;
}
*/