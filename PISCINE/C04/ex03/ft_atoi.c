/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:09:27 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/25 18:08:28 by thinkpad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	o;

	result = 0;
	i = 0;
	o = 0;
	while ((str[i] >= 9) && (str[i] <= 13 || str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			o++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (o % 2 != 0)
		result = result * -1;
	return (result);
}
/*
int main(int argc, char **argv) 
{
    char *str = argv[1];
    ft_atoi(str);
    printf("%d\n", *str);
    return 0;
}
*/
