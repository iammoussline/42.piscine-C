#include <unistd.h>

void    ft_putchar(char c, int i)
{
    while (i > 0)
    {
        write(1, &c, 1);
        --i;
    }
}

char    ft_repeat_alpha(char *str)
{
    while (*str)
    {
        if(*str >= 'a' && *str <= 'z')
            ft_putchar(*str, *str + 1 - 'a');
            else if(*str >= 'A' && *str >= 'Z')
                ft_putchar(*str, *str + 1 - 'A');
                else
                    write(1 , str, 1);
                    ++str;
    }
    return 0;
}

int main ()
{
    char str[] = "Mustafa";
    ft_repeat_alpha(str);
    return 0;
}