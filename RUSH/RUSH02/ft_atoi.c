/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrischma <hrischma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:52:04 by hrischma          #+#    #+#             */
/*   Updated: 2024/02/13 17:12:49 by hrischma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (str[i] == 32 || str[i] == 45)
	{
		if (str[i] == 45)
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	while (str[i] == 32)
	{
		i++;
	}
	printf("%d\n", res);
	return (res);
}
