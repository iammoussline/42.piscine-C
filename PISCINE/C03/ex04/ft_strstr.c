#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
    char *start;
    char *search;
    
    start = str;
    search = to_find;
    if (*to_find == '\0')
    {
        return str;
    }
    while (*str != '\0')
    {
        start = str;
        search = to_find;
        while (*search != '\0' && *start == *search)
        {
            start++;
            search++;
        }
        if (*search == '\0')
        {
            return str;
        }
        str++;
    }
    return NULL;
}
/*
#include<stdio.h>

int main()
{
    char str[] = "Hello, world!";
    char to_find[] = "world";
    char *result = ft_strstr(str, to_find);
    
    if (result != NULL) {
        printf("La sous-chaîne \"%s\" a été trouvée à l'index %ld dans la chaîne \"%s\".\n", to_find, result - str, str);
    } else {
        printf("La sous-chaîne \"%s\" n'a pas été trouvée dans la chaîne \"%s\".\n", to_find, str);
    }
    
    return 0;
}
*/