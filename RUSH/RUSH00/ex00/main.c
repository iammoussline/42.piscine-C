/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:55:39 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/11 22:10:58 by ynyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rush(int x, int y);

int	ft_me_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (*str == ' ' || (*str >= '\b' && *str <= '\r'))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + *str - '0';
		else
			return (-1);
		str++;
	}
	return (result * sign);
}

int	main(int ac, char **av)
{
	int	x;
	int	y;

	if (ac != 3)
		return (0);
	x = ft_me_atoi(av[1]);
	y = ft_me_atoi(av[2]);
	if (x <= 0 || y <= 0)
		return (0);
	rush(x, y);
	return (0);
}
