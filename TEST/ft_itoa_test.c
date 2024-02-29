#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr) 
{
	if(nbr == -2147483648)
    {
        return ("-2147483648")
    }
    int n = nbr;
    int len = 0;
    if(nbr <= 0)
    {
        len++;
    }
    while(n)
    {
        n /= 10;
        len++;
    }
    char *result = (*char)malloc((char *) * (len + 1));
        if (result == NULL)
            return (NULL);

    result[len] = '\0'

    if (nbr == '0')
    {
        return (result);
    }


int main ()
{
    int i = 13031997;
    ft_itoa(i);
    printf("Voici le int %d et voici le char %s", i, ft_itoa(i));
    return 0;
}