/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:07:45 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/13 20:07:47 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strlowcase(char *str)
{
	int		i;
	i = 0;

	while (str[i] != '\0')
	{
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
			i++;
		}
	}
	return (str); 
}
/*
int main ()
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	ft_strlowcase(str);

	printf("%s", str);

	return 0;
}
*/
