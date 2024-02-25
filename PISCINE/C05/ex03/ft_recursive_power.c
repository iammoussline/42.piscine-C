/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:35:56 by thinkpad          #+#    #+#             */
/*   Updated: 2024/02/25 19:36:09 by thinkpad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	o;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power > 1)
	{
		o = ft_recursive_power(nb, power - 1);
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
	i = ft_recursive_power(2, 0);
	printf("%d", i);
}*/
