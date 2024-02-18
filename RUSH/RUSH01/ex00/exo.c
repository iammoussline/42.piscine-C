#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



int main ()
{
	int find = 1;
	int	i = 0;
	char *str;

	//on crée notre premier tableau avec toutes les valeurs à 1
	str = malloc(sizeof(char) * (16 +1));
	str[16] = '\0';
	while (i <16)
	{
		str[i] = '3';
		i++;
	}
	i = 0;
	while ( ft_strncmp(str,"4444444444444444",16))
	{
	//on incrémente notre tableau de 1 à chaque tour de boucle 
		str[0] += 1;
		//une fois à 5, la fonction levelup s'occupe de passer la retenue à la case suivante et remet toutes les valeurs précédentes à 1
		if (str[0] > '4')
			levelup(str);
		// on regarde si le tableau ne contient pas de doublons dans les colonnes ou les lignes
		if (check_no_duplicate(str) == 0)
		{
			//ajouter ici la fonction qui regarde les conditions des colonnes et des lignes donner en paramètre,il faut qu'elle retourne 0 si c'est bon   <------ MOUSS
			if (fonction_mouss(str_to_tab(str)) == 0)
			{
				affiche_tab(str);
				free(str);
				return (0);
			}
		}
	}
	free(str);
	ft_putstr("Error\n");
	return (0);
}
