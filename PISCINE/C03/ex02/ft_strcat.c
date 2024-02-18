/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:28:26 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/18 16:42:33 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[o] != '\0')
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
    
    printf("Avant : %s\n", dest);
    ft_strcat(dest, src);
    printf("Après : %s\n", dest);
    
    return 0;
}
/*
