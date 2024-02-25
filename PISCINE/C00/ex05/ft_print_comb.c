/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:55:12 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/25 17:52:08 by thinkpad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (! (a == 55 && b == 56 && c == 57))
		write(1, ", ", 2);
}

void	while1(char a, char b, char c)
{
	while (a < b < c && ! (a == 55 && b == 56 && c == 57))
	{
		ft_putchar(a, b, c);
		if (b == 56 && c == 57)
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
		else if (c == 57 && b != 56)
		{
			b++;
			c = b + 1;
		}
		else if (! (a == 55 && b == 56 && c == 57))
		{
			c++;
		}
	}
	ft_putchar(a, b, c);
}
/*
void	ft_print_comb(void)
{
	while1(48, 49, 50);
}
int main() {
    ft_print_comb();
    return 0;
}
*/
