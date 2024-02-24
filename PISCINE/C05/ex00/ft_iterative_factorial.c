/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:43:19 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/24 10:25:50 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	long	i;
	long	o;

	if (nb < 0)
		return (0);
	o = 1;
	i = 1;
	while (i <= nb)
	{
		o *= i;
		i++;
	}
	return (o);
}
/*
}
int main ()
{
	int nombre = 2;
	ft_iterative_factorial(nombre);
	printf("le fqctoriel de %d est %d", nombre, ft_iterative_factorial(nombre));
	return 0;
}
*/
