#include <unistd.h>

void ft_putnbr(int nb)
{
    write(1, nb, 4);
}

int main ()
{
    int nb = 42;
    ft_putnbr(42);
    return 0;
}