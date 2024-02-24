/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:46:23 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/24 10:13:00 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	long	o;

	o = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		o *= nb;
		power--;
	}
	return (o);
}
/*
int main ()
{
    int num;
    num = -1;
    int nume = 2;
    ft_iterative_power(num, nume);
    printf("puissance de %d est %d", num, ft_iterative_power(num, nume));

    return 0;
}
*/
