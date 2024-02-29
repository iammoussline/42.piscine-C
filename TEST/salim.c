#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}


int    ft_strlen(char *str)
{
    int count = 0;

    while(*str != '\0')
    {
        str++;
        count++;
    }
    return (count);
}

char    *ft_reverse_char(char *str)
{

    int i;

    i = ft_strlen(str) - 1;
    while (i >= 0)
    {
        write(1, (str+i), 1);
        i--;
    }
    ft_putchar('\n');
    return (str);
}


int main (int argc, char **argv)
{
    if (argc > 2)
        return (0);
    write(1, (argv[1]), ft_strlen(argv[1]));
    ft_putchar(' ');
    ft_strlen(argv[1]);
    ft_reverse_char(argv[1]);
    return 0;
}