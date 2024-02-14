/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:07:13 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/13 20:07:16 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char    *ft_strupcase(char *str)
{
	int		i;
	i = 0;

	while (str[i] != '\0')
	{
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] -32;
			i++;
		}
	}
	return (str);
}
int main ()
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	ft_strupcase(str);

	printf("%s", str);

	return 0;
}   