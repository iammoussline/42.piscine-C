/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:07:54 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/14 15:07:29 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    int i;
    int o;

    i = 0;
    o = 1;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && o)
        {
            str[i] = str[i] - 32;
            o = 0;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            o = 0;
        }
        else if (str[i] < 'a' || str[i] > 'z')
        {
            o = 1;
        }
        else
        {
            o = 0;
        }
        i++;
    }
    return (str);
}
/*
int main()
{
    char str[] = "43mots hello bg il est 13h30";
    ft_strcapitalize(str);
    printf("%s\n", str);
    return 0;
}
*/