/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:36:35 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/26 08:29:17 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	o;

	o = 1;
	if (nb == 0)
		return (0);
	while (nb > o * o)
		o++;
	if (nb == o * o)
		return (o);
	else
		return (0);
}
/*#include <stdio.h>
int main (void)
{
	printf("%d\n",ft_sqrt(1));
}*/
