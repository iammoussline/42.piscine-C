/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:36:57 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/14 15:26:18 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_uppercase(char *str)
{	
	int	i;
	int	a;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
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
	char str[] = "";
	char l[] = "85l";
	char b[] = "BONJOUR";

	int z;
	int x;
	int y;

	z = ft_str_is_uppercase(str);
	x = ft_str_is_uppercase(l);
	y = ft_str_is_uppercase(b);

	printf("%d", z);
	printf("%d", x);
	printf("%d", y);

	return 0;
}
*/
