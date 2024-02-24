/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:54:50 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/24 10:18:42 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (i);
}
/*
int main ()
{
    int num;
    num = 65646545;
    ft_sqrt(num);
    printf("La racine carre de %d est %d\n", num, ft_sqrt(num));

    return 0;
}
*/
