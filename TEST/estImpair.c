#include <unistd.h>
void    ft_putchar(char c)
{
    write(1 , &c, 1);
}



int estImpair(int nb)
{
    if (nb % 2 == 0)
    {
        ft_putchar('0');
    }
    else
    {
        ft_putchar('1');
    }
}

int main ()
{
    int nb = 96;
    estImpair(nb);
}