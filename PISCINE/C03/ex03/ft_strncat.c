/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:28:38 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/18 18:29:45 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[o] != '\0' || o < nb)
	{
		dest[i + o] = src[o];
		o++;
	}
	dest[i + o] = '\0';
	return (dest);
}
/*
#include <stdio.h>

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
