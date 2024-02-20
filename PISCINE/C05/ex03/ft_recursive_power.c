#include <stdio.h>


int ft_recursive_power(int nb, int power)
{
    if(nb == 0)
    {
        return (1);
    }
    else if(power <= 1)
    {
        return(nb, power);
    }
    else
    {
        return (nb * ft_recursive_power(nb, power - 1));
    }
}
/*
int main ()
{
    int i = 1000;
    int o = 3;
    ft_recursive_power(i, o);
    printf("La puissance de 3 est %d\n", ft_recursive_power(i, o));
    return 0;
}
*/