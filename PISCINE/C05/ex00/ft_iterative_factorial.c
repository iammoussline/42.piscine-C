/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:43:19 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/23 20:46:14 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	o;
	int	i;

	o = 1;
	i = 2;
	while (i <= nb)
	{
		if (i <= nb)
		{
			o = o * i;
		}
		i++;
	}
	return (o);
}
