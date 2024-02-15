/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:01:42 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/14 14:56:01 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		a;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			a = 1;
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (a);
}
/*
int main ()
{
	char str[] = "oiguyijm4";
	char a[] = "85";
	char b[] = "";

	int i;
	int o;
	int m;

	i = ft_str_is_numeric(str);
	o = ft_str_is_numeric(a);
	m = ft_str_is_numeric(b);

	printf("%d", i);
	printf("%d", o);
	printf("%d", m);

	return 0;
}
*/
