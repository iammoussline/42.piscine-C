/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:03:30 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/14 15:03:50 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
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
		if (str[i] >= 32 && str[i] <= 127)
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
	char str[] = " - /  * *";
	char a[] = "	";
	char b[] = "krghlbrhgb";

	int i;
	int o;
	int m;

	i = ft_str_is_printable(str);
	o = ft_str_is_printable(a);
	m = ft_str_is_printable(b);

	printf("%d", i);
	printf("%d", o);
	printf("%d", m);

	return 0;
}
*/
