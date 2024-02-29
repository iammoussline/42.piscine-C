#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
    int i;
    int len;
    char *tab;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    len = i;

    tab = (char *)malloc((len + 1) * sizeof(char));
    if(tab == NULL)
        return(NULL);
    i = 0;

    while (i < len)
    {
        tab[i] = src[i];
        i++;
    }
    tab[i] = '\0';

    return (tab);
}
int main(void)
{
	char text1[] = "Teste";
	printf("%s\n", ft_strdup(text1));
}