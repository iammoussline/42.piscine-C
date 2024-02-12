/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 09:38:05 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/11 22:51:10 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	o;
	int	m;

	i = 0;
	o = size - 1;
	while (i < o)
	{
		m = tab[i];
		tab[i] = tab[o];
		tab[o] = m;
		i++;
		o--;
	}
}
