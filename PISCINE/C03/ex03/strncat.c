#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    size_t i; 
    int o;

    i = 0;
    o = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[o] != '\0' && o < nb)
    {
        dest[i + o] = src[o];
        o++;
    }
    dest[i + o] = '\0';
    return dest;
}
#include <stdio.h>
/*
int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world!";
    unsigned int nb = 3;
    
    printf("Avant concaténation : %s\n", dest);
    ft_strncat(dest, src, nb);
    printf("Après concaténation : %s\n", dest);
    
    return 0;
}
*/