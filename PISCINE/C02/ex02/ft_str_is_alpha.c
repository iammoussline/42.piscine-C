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
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	i = 0;

	while(str[i] != '\0')
	{
		if((str[i] >= 'A' && stri[i] <= 'Z') && (str[i] >= 'a' && stri[i] <= 'z'))
		{
			str[i] = 1;
			i++;
		}
		else if(str[i] >= 'a' && stri[i] <= 'z')
		while(str[i] >= '0' && stri[i] <= '9')
		{
			str[i] = 0;
			i++;
		}
	}
	return (str);
}
