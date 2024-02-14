/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:36:57 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/13 17:37:00 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_str_is_uppercase(char *str);
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
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char a[] = "85l";
	char b[] = "Bonjour";

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
