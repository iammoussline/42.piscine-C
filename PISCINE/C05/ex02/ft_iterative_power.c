#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int o;
    o = 1;
    while(power > 0)
    {
        int o *= nb;
        power--;
    
    }
    return (o);
}

int main ()
{
    int num;
    num = 5;
    int nume = 2;
    ft_iterative_power(num, nume);
    printf("puissance de %d", ft_iterative_power(num, nume));

    return 0;
}
