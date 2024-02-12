/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:17:37 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/08 21:50:00 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	rev;

	rev = 'z';
	while (rev >= 'a')
	{
		write (1, &rev, 1);
		rev--;
	}
}
