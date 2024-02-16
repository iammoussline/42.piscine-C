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