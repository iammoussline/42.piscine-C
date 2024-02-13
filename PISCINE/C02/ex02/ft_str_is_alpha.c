/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:49:27 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/12 18:28:10 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
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
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			a = 1;
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			return (1);
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
	char str[] = "az";
	char a[] = "85";
	char b[] = "000000";

	int i;
	int o;
	int m;

	i = ft_str_is_alpha(str);
	o = ft_str_is_alpha(a);
	m = ft_str_is_alpha(b);

	printf("%d", i);
	printf("%d", o);
	printf("%d", m);

	return 0;
}
*/