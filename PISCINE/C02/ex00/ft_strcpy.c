/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkandemi <mkandemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:43:02 by mkandemi          #+#    #+#             */
/*   Updated: 2024/02/12 13:50:07 by mkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
/*
{
	char	src[] = "Hello, world!";
	char	dest[50];

	ft_strcpy(dest, src);
	
	printf("%s, %s", src, dest);

	return (0);
}
*/