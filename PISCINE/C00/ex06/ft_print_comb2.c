/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:25:19 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/25 19:26:33 by thinkpad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_incret(int num)
{
	char	ca;
	char	cb;

	ca = 48;
	cb = 48;
	if (num <= 9)
	{
		cb = 48 + num;
	}
	else
	{
		ca = num / 10;
		cb = (num - (ca * 10) + 48);
		ca = ca + 48;
	}
	write(1, &ca, 1);
	write(1, &cb, 1);
}

void	ft_putchar(int a)
{
	if ((a + 1) < 99)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	while1(int a, int b)
{
	while (b > a && a < 99)
	{
		ft_incret(a);
		write(1, " ", 1);
		ft_incret(b);
		ft_putchar(a);
		if (b == 99)
		{
			a++;
			b = a + 1;
		}
		else
			b++;
	}
}

void	ft_print_comb2(void)
{
	while1(0, 1);
}
/*
#include <stdio.h>

int main() {
    ft_print_comb2();
    return 0;
}
*/
