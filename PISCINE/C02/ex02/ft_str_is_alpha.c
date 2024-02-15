/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:49:27 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/14 15:08:19 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
		if (str[i] >= 'a' && str[i] <= 'z' && || str[i] >= 'A' && str[i] <= 'Z')
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
	char str[] = "az";
	char a[] = "85";
	char b[] = "jdb58dj";

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
