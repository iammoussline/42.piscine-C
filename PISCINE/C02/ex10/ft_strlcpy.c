/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:02:24 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/13 20:08:18 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int    (char *dest, char *src, unsigned int size)

{
	int i;

	i = 0;
	while(src[i] == '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
/*
int		main(void)

{
	char	src[] = "Hello, world!";
	char	dest[50];

	ft_strcpy(dest, src);
	printf("%s, %s", src, dest);

	return (0);
}
*/
