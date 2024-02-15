int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    while (n > 0 && *s1 != '\0' && *s2 != '\0' && *s1 == *s2)
    {
        s1++;
        s2++;
        n--;
    }
    if (n == 0 || (*s1 == *s2))
    {
        return 0;
    }
    else if (*s1 > *s2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
/*
#include <stdio.h>
int main() 
{
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "hell";
    char str4[] = "hello";

    printf("ft_strncmp(\"%s\", \"%s\", 3) = %d\n", str1, str2, ft_strncmp(str1, str2, 3));
    printf("ft_strncmp(\"%s\", \"%s\", 3) = %d\n", str1, str3, ft_strncmp(str1, str3, 3));
    printf("ft_strncmp(\"%s\", \"%s\", 5) = %d\n", str1, str4, ft_strncmp(str1, str4, 5));

    return 0;
}
*/