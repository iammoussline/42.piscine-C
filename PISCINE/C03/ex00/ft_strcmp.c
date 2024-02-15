/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:54:44 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/14 15:54:46 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    
    while ((*s1 != '\0') && (*s2 == *s1))
    {
        *s1 ++;
        *s2 ++;
    }
    if (*s1 == *s2)
    {
        return (0);
    }
    else if (*s1 > *s2)
    {
        return (1);
    }
    else if (*s1 < *s2)
    {
        return (-1);
    }
}

int main()
{
    char s1[] = "Toto";
    char s2[] = "toto";

    ft_strcmp(s1, s2);

    printf("%d et %d", s1, s2);

    return 0;
}

