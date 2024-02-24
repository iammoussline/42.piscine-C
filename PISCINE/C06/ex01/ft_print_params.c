/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 07:52:53 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/24 07:54:19 by mkandemi         ###   ########.fr       */
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

	i = 1;
	(void) argc;
	while (argv[i] != 0)
	{
		o = 0;
		while (argv[i][o] != 0)
		{
			ft_putchar(argv[i][o]);
			o++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
