/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 09:59:53 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/14 15:08:11 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcnpy(char *dest, const char *src, unsigned int n)
{
    unsigned int i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    if (i < n)
    {
        dest[i] = '\0';
    }

    return (dest);
}

int		main(void)
{
	char src[] = "word!";
	char dest[50]; 

	ft_strcnpy(dest, src, 10);

	write(1, dest, 50);

	return (0);
}
