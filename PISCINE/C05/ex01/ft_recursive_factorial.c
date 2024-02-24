/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:48:27 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/24 10:01:29 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	long	o;

	o = nb;
	if (o == 1)
	{
		return (1);
	}
	else
	{
		return (o * ft_recursive_factorial(nb - 1));
	}
}
/*
int main ()
{
	int o;
	int nombre = 5;
	ft_recursive_factorial(nombre);
	printf("le fqctoriel de %d est %d", nombre, ft_recursive_factorial(nombre));
	return 0;
}
*/
