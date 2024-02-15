#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    
    while ((*s1 < n) && (*s2 == *s1))
    {
        s1 ++;
        s2 ++;
    }
    if (*s1 == *s2)
    {
        return (0);
    }
    else if (*s1 > *s2)
    {
        return (1);
    }
    else if (*s1 < *s2)
    {
        return (-1);
    }
    return (0);
}