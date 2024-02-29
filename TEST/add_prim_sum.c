#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_prime(int nb)
{
    int i = nb / 2;
    if (nb % i == 0 || nb % 1 == 0)
    {
        ft_putchar('1');
        ft_putchar('\n');
    }
    else
    {
        ft_putchar('0');
        ft_putchar('\n');
    }
}


int main()
{
    int i = 14;
    ft_prime(i);
    return 0;
}