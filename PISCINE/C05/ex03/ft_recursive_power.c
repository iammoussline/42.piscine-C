/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:02:01 by rteles            #+#    #+#             */
/*   Updated: 2021/07/19 14:02:02 by rteles           ###   ########.fr       */
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