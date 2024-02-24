/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:51:05 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/24 10:13:23 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power <= 1)
	{
		return (nb);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
/*
int main ()
{
    int i = 0;
	int o = 0;
    ft_recursive_power(i, o);
    printf("La puissance de %d est %d\n", i, ft_recursive_power(i, o));
    return 0;
}
*/
