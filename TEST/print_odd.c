#include <unistd.h>



char    ft_strlen(char *str)
{
    int o;

    o = 0;
    while (str[o] != '\0')
        o++;
    return (o);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print_odd(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (i % 2 == 1)
            ft_putchar(str[i]);
        i++;
    }
}

int main (int argc, char **argv)
{
    char *str;
    str = argv[1];
    ft_strlen(str);
    print_odd(str);
    return 0;
}

