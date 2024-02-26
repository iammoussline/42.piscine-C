/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:34:35 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/26 08:28:18 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	o;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 2)
	{
		o = ft_recursive_factorial(nb - 1);
		o = o * nb;
		nb--;
	}
	else
		o = nb;
	return (o);
}
/*
#include <stdio.h>
int main()
{
	int i;
	i = ft_recursive_factorial(3);
	printf("%d", i);
}*/
