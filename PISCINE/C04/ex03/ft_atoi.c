/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:09:27 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/21 16:47:58 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;
	int	o;

	result = 0;
	sign = 1;
	i = 0;
	o = 0;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
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
int main() 
{
    const char *str = " ---+--+1234ab567";
    int num = atoi(str);
    printf("%d\n", num);
    return 0;
}
*/
