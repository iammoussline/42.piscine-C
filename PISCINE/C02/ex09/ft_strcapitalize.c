/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:07:54 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/13 20:07:55 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
	{
		while (str[i] >= 'A' && str[i] <= 'z')
		{
			str[i] = str[i];
			i++;
		}
	}
	return (str);
}
int main ()
{
	char str[] = "Hello Bg il est 13h30";

	ft_strcapitalize(str);

	printf("%s", str);

	return 0;
}
