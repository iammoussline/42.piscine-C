/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:37:16 by thinkpad          #+#    #+#             */
/*   Updated: 2024/02/25 19:37:28 by thinkpad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	o;
	int	i;

	if (nb <= 2)
		return (2);
	else if ((nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) && nb > 5)
		return (ft_find_next_prime(nb + 1));
	else if (nb == 4)
		return (5);
	else
	{
		o = 3;
		i = nb / 2;
		while (o <= i)
		{
			if (nb % o == 0 || nb % i == 0)
				return (ft_find_next_prime(nb + 1));
			o += 2;
			i -= 2;
		}
	}
	return (nb);
}
/*#include <stdio.h>
int main()
{
	int i;
	i = ft_find_next_prime(2147483630);
	printf("1: %d\n", i);
}*/
