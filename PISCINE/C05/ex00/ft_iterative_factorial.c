/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:35:10 by thinkpad          #+#    #+#             */
/*   Updated: 2024/02/25 19:35:25 by thinkpad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	o;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	o = nb;
	nb--;
	while (nb > 1)
	{
		o = o * nb;
		nb--;
	}
	return (o);
}
/*#include <stdio.h>

int main()
{
	int i;
	i = ft_iterative_factorial(3);
	printf("%d", i);
}*/
