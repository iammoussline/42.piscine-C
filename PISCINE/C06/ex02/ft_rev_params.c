/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 07:54:30 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/28 18:38:34 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	o;

	i = argc - 1;
	while (i > 0)
	{
		o = 0;
		while (argv[i][o] != '\0')
		{
			ft_putchar(argv[i][o]);
			o++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
