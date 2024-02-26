/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:35:36 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/26 08:28:32 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	o;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	o = nb;
	power--;
	while (power > 0)
	{
		o = o * nb;
		power--;
	}
	return (o);
}
/*#include <stdio.h>
int main()
{
	int i;
	i = ft_recursive_factorial(2, 3);
	printf("%d", i);
	return 0;
}*/
