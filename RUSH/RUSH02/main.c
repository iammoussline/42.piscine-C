/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrischma <hrischma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:23:46 by hrischma          #+#    #+#             */
/*   Updated: 2024/02/24 11:24:07 by hrischma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "t_type.h"

int	ft_atoi(char *str);
char	*ft_convert(int nb, t_entry_dict *dictionary);
void libererDictionnaire(t_entry_dict *entrees, int nbEntrees);
t_entry_dict* parserFichierDict(const char *nomFichier, int *nbEntrees);
void	ft_putchar(char c);

int main()
{
    int nbEntrees;
    t_entry_dict *entrees = parserFichierDict("numbers.dict", &nbEntrees);
    if (entrees == NULL)
    {
        char error_msg[] = "Dict Error\n";
        int i = 0;
        while (error_msg[i] != '\0') {
            ft_putchar(error_msg[i]);
            i++;
        }
        return 1;
    }

    int i = 0;
    char c;
    while (i < nbEntrees)
    {
        char *ptr = entrees[i].key;
        while ((c = *ptr++) != '\0') {
            ft_putchar(c);
        }
        ft_putchar(':');
        ptr = entrees[i].value;
        while ((c = *ptr++) != '\0') {
            ft_putchar(c);
        }
        ft_putchar('\n');
        i++;
    }
    
   // ft_convert(ft_atoi("1234"), t_entry_dict *entrees = parserFichierDict("numbers.dict", &nbEntrees));

    libererDictionnaire(entrees, nbEntrees);

    return 0;
}
/*
int	mai(void)
{
	//char	*dict;
	//char	*value;
	t_dict *dictionary;
	int numEntries;

	const char *filename = "numbers.dict";
	ft_parse(filename, &dictionary, &num_entries);
	int r = ft_atoi("1234");
	printf("%s", ft_convert(r, dictionary));
	free(dictionary);
}*/
