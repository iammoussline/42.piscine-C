/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:07:54 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/15 14:07:44 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	o;

	i = 0;
	o = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (o)
			{
				str[i] -= 32;
			}
			o = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		o = 0;
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
		str[i] += 32;
		else
		o = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "43mots heLlo bg AAAAAAA est 13h30";
    ft_strcapitalize(str);
    printf("%s\n", str);
    return 0;
}
*/
