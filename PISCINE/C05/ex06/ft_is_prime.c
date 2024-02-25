/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:00:56 by rteles            #+#    #+#             */
/*   Updated: 2021/07/19 16:00:58 by rteles           ###   ########.fr       */
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
		if (nb % o == 0 || nb % o == 0)
			return (0);
		o += 2;
		i -= 2;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	int i;
	i = ft_is_prime(2147483647);
	printf("I: %d\n", i);
}*/