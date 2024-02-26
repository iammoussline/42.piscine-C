/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:36:56 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/26 08:29:33 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	o;
	int	i;

	if (nb <= 1 || nb == 4)
		return (0);
	else if ((nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) && nb > 5)
		return (0);
	o = 3;
	i = nb / 2;
	while (o <= i)
	{
		if (nb % o == 0 || nb % i == 0)
			return (0);
		o += 2;
		i -= 2;
	}
	return (1);
}
#include <stdio.h>
int main()
{
	int i;
	i = ft_is_prime(4099);
	printf("I: %d\n", i);
}
