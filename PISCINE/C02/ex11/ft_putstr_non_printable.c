/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:32:27 by thinkpad          #+#    #+#             */
/*   Updated: 2024/02/25 19:32:43 by thinkpad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	putstr_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (putstr_is_printable(str[i]))
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			if (str[i] < 0)
				c = 256 + str[i];
			else
				c = str[i];
			ft_putchar("0123456789abcdef"[c / 16]);
			ft_putchar("0123456789abcdef"[c % 16]);
		}
		i++;
	}
}
