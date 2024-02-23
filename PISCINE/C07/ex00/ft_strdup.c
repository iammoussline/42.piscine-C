#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	compteur;

	compteur = 0;
	while (*str != '\0')
	{
	str++;
	compteur++;
	}
	return (compteur);
}
char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
char    *ft_strdup(char *src)
{
    char *dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
    if (dest == NULL)
    {
        return NULL;
    }
    ft_strcpy(dest, src);
    return (dest);
}
int main(void)
{
    char *original_str = "Hello, world!";
    char *duplicate_str = ft_strdup(original_str);
    if (duplicate_str != NULL)
    {
        // Utilisez la chaîne dupliquée
        // ...
        
        // Libérez la mémoire allouée
        free(duplicate_str);
    }
    return (0);
}