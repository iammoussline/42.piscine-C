#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}


int ft_strcmpr(char *s1, char *s2)
{
    int i = 0;

    while (s2[i] != '\0' && s1[i] != '\0' && s2[i] == s1[i])
    {
        i++;
    }
    return (s2[i] - s1[i]);
}


int main ()
{
    char s2[] = "Hello World";
    char s1[] = "6846466878";
    ft_strcmpr(s1, s2);
    printf("%d", ft_strcmpr(s2, s1));
    return 0;
}